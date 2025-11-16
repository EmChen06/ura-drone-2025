# https://www.desmos.com/calculator/rvbldbnmdz initial calculations
# https://www.desmos.com/calculator/mqykdgpcoq taking time and final position as inputs

import numpy as np


def generate_quadratic_coeffs(xy_points, times=None):
	"""
	Generate quadratic polynomial coefficients for x(t) and y(t) that pass through the given points.
	- xy_points: iterable of 2D points (array-like) length >= 3
	- times: optional iterable of same length giving parameter values; if None, chord-length parameterization is used and normalized to [0,1]
	Returns (coeffs_x, coeffs_y, t_vals) where coeffs are arrays [a, b, c] for a*t^2 + b*t + c.
	"""
	pts = np.asarray(xy_points, dtype=float)
	if pts.ndim != 2 or pts.shape[1] < 2:
		raise ValueError("xy_points must be an iterable of 2D points")
	n = pts.shape[0]
	if n < 3:
		raise ValueError("Need at least 3 points to fit a quadratic")

	# compute parameter values if not provided: chord-length parameterization normalized to [0,1]
	if times is None:
		diffs = np.diff(pts[:, :2], axis=0)
		dists = np.linalg.norm(diffs, axis=1)
		cum = np.concatenate(([0.0], np.cumsum(dists)))
		total = cum[-1]
		if total <= 0:
			t = np.linspace(0.0, 1.0, n)
		else:
			t = cum / total
	else:
		t = np.asarray(times, dtype=float)
		if t.shape[0] != n:
			raise ValueError("times must have same length as xy_points")

	# build Vandermonde matrix for quadratic: [t^2, t, 1]
	A = np.column_stack((t**2, t, np.ones_like(t)))

	# solve least-squares for x and y (works for exactly 3 points or more)
	coeffs_x, *_ = np.linalg.lstsq(A, pts[:, 0], rcond=None)
	coeffs_y, *_ = np.linalg.lstsq(A, pts[:, 1], rcond=None)

	return coeffs_x, coeffs_y, t

def eval_quad(coeffs, t):
	"""Evaluate quadratic given coeffs [a,b,c] at scalar or array t."""
	a, b, c = coeffs
	return a * t**2 + b * t + c

def find_arc_length(coeffs_x, coeffs_y, t_start = 0, t_end = 1, num_samples=100):
    """Approximate arc length of parametric curve defined by coeffs_x, coeffs_y from t_start to t_end."""
    t_samples = np.linspace(t_start, t_end, num_samples)
    x_samples = eval_quad(coeffs_x, t_samples)
    y_samples = eval_quad(coeffs_y, t_samples)
    diffs = np.diff(np.column_stack((x_samples, y_samples)), axis=0)
    dists = np.linalg.norm(diffs, axis=1)
    return np.sum(dists)

def calculate_curvilinear_trajectory (arc_length, t_final, V_MAX, A_MAX):
    s_norm = arc_length
    t_accel_max = min(t_final / 2, t_final - s_norm / V_MAX)

    discriminant = t_final**2 - 4 * (s_norm / A_MAX)
    if discriminant < 0:
        raise ValueError(f"No valid solution for the given constraints; discriminant {discriminant} < 0")
    t_accel_min = max(0, (t_final - np.sqrt(discriminant)) / 2)

    if t_accel_min > t_accel_max + 1e-6:
        raise ValueError(f"No valid t_accel in range [{t_accel_min}, {t_accel_max}]")

    t_accel = float(input(f"Enter t_accel in range [{t_accel_min}, {t_accel_max}]: "))
    if t_accel < t_accel_min or t_accel > t_accel_max:
        raise ValueError(f"t_accel {t_accel} out of bounds [{t_accel_min}, {t_accel_max}]")
    t_2 = t_final - t_accel
    v_peak = arc_length * (1 / t_2) #double check this
    a_peak = v_peak / t_accel

    # final formulas
    def a(t):
        if t < t_accel:
            return a_peak
        elif t < t_2:
            return 0.0
        else:
            return -a_peak

    def v(t):
        if t < t_accel:
            return a_peak * t
        elif t < t_2:
            return v_peak
        else:
            return v_peak - a_peak * (t - t_2)
        
    def s(t):
        if t < t_accel:
            return a_peak * ((t ** 2) / 2)
        elif t < t_2:
            return v_peak * (t - t_accel / 2)
        else:
            return v_peak * (t - t_accel / 2) - a_peak * (((t - t_2) ** 2) / 2)

    def quad_inst_rate_of_change(coeffs, t, h = 1e-6):
         return (eval_quad(coeffs, t + h) - eval_quad(coeffs, t)) / h

    def inst_rate_of_change(f, t, h = 1e-6):
            return (f(t + h) - f(t)) / h

    def theta(t):
        # compute dx/dt, dy/dt using coefficient-based finite difference
        dx = quad_inst_rate_of_change(coeffs_x, t)
        dy = quad_inst_rate_of_change(coeffs_y, t)
        return np.arctan2(dy, dx)

    def s_vector(t):
        return np.array([eval_quad(coeffs_x, t), eval_quad(coeffs_y, t)])

    def v_vector(t):
        th = theta(t)
        return np.array([v(t) * np.cos(th), v(t) * np.sin(th)])
    
    def a_vector(t):
        th = theta(t)
        th_dot = inst_rate_of_change(theta, t)
        # tangential + normal components (vector form)
        return np.array([
            a(t) * np.cos(th) - th_dot * v(t) * np.sin(th),
            a(t) * np.sin(th) + th_dot * v(t) * np.cos(th)
        ])

    return s_vector, v_vector, a_vector

xy_points = [np.array([0.0, 0.0]), np.array([3.0, 2.0]), np.array([5, 8])]
coeffs_x, coeffs_y, t_vals = generate_quadratic_coeffs(xy_points)
arc_length = find_arc_length(coeffs_x, coeffs_y, t_start=t_vals[0], t_end=t_vals[-1])
#dummy values, just want to generate correct curve and polynomials
t_final = 50.0  # s
V_MAX = 2.0  # m/s
A_MAX = 1.0  # m/s^2
s, v, a = calculate_curvilinear_trajectory(arc_length, t_final, V_MAX, A_MAX)


# print results in csv format (handle 2D curve outputs safely)
TIME_STEP = 0.1 # s
num_steps = int(t_final / TIME_STEP) + 1
for i in range(num_steps):
    t = i * TIME_STEP
    s_vec = s(t)
    v_vec = v(t)
    a_vec = a(t)
    s_arr = np.asarray(s_vec).flatten()
    v_arr = np.asarray(v_vec).flatten()
    a_arr = np.asarray(a_vec).flatten()
    max_len = max(len(s_arr), len(v_arr), len(a_arr))
    def pad(arr, n):
        if len(arr) >= n:
            return arr
        return np.concatenate([arr, np.zeros(n - len(arr))])
    s_p = pad(s_arr, max_len)
    v_p = pad(v_arr, max_len)
    a_p = pad(a_arr, max_len)
    vals = [TIME_STEP]
    for j in range(max_len):
        vals.extend([s_p[j], v_p[j], a_p[j]])
    print(",".join(f"{val:.6f}" for val in vals))

coeffs_x, coeffs_y, t_vals = generate_quadratic_coeffs(xy_points)
print("coeffs_x:", coeffs_x.tolist())
print("coeffs_y:", coeffs_y.tolist())
