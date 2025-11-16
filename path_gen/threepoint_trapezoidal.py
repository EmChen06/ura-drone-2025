# https://www.desmos.com/calculator/rvbldbnmdz initial calculations
# https://www.desmos.com/calculator/mqykdgpcoq taking time and final position as inputs

import numpy as np

xy_points = [np.array([0.0, 0.0]), np.array([3.0, 2.0]), np.array([5, 8])]

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

# param s_final: final position (3D vector)
# param t_final: final time (scalar)
# param V_MAX: maximum velocity (scalar, magnitude)
# param A_MAX: maximum acceleration (scalar, magnitude)
# returns: functions s(t), v(t), a(t) giving position, velocity, acceleration at time t
def calculate_trajectory(s_final, t_final, V_MAX, A_MAX):
    # calculate t_accel bounds
    # these are calculated from solving |v_peak| < V_MAX (t_accel upper bound) and
    # |a_peak| < A_MAX (t_accel lower bound) inequalities
    # and the fact that t_accel must be less than t_final / 2
    s_norm = np.linalg.norm(s_final)
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

    # intermediate calculations
    t_2 = t_final - t_accel
    v_peak = s_final * (1 / t_2)
    a_peak = v_peak / t_accel

    # final formulas
    def f_double_prime(t):
        if t < t_accel:
            return a_peak
        elif t < t_2:
            return np.array([0.0, 0.0, 0.0]).T
        else:
            return -a_peak

    def f_prime(t):
        if t < t_accel:
            return a_peak * t
        elif t < t_2:
            return v_peak
        else:
            return v_peak - a_peak * (t - t_2)
        
    def f(t):
        if t < t_accel:
            return a_peak * ((t ** 2) / 2)
        elif t < t_2:
            return v_peak * (t - t_accel / 2)
        else:
            return v_peak * (t - t_accel / 2) - a_peak * (((t - t_2) ** 2) / 2)
        
    return f, f_prime, f_double_prime

def valued_trajectory(s_final, t_final, V_MAX, A_MAX, time_steps):
    coeffs_x, coeffs_y, t_vals = generate_quadratic_coeffs(xy_points)
    x = lambda t: eval_quad(coeffs_x, t)
    y = lambda t: eval_quad(coeffs_y, t)

    f, f_p, f_pp = calculate_trajectory(s_final, t_final, V_MAX, A_MAX)

    def theta(t):
        return np.arctan2(y(t), x(t))
    
    def theta_p(t):
        dx_dt = 2 * coeffs_x[0] * t + coeffs_x[1]
        dy_dt = 2 * coeffs_y[0] * t + coeffs_y[1]
        return (dx_dt * y(t) - dy_dt * x(t)) / (x(t)**2 + y(t)**2)
    
    def s(t):
        return np.array([x(t), y(t), theta(t)]).T
    
    def v(t):
        return (f_p(t) * np.array([np.cos(theta(t)), np.sin(theta(t)), 0.0])).T
    
    def a(t):
        return (f_pp(t) * np.cos(theta(t)) - f_p(t) * np.sin(theta(t)) * theta_p(t),
                f_pp(t) * np.sin(theta(t)) + f_p(t) * np.cos(theta(t)) * theta_p(t),
                0.0).T
    
    return s, v, a

s_final = np.array([0.5, 0.0, 0.0]).T # m
t_final = 3.0  # s
V_MAX = 2.0  # m/s
A_MAX = 1.0  # m/s^2

s, v, a = calculate_trajectory(s_final, t_final, V_MAX, A_MAX)

# print results in csv format
TIME_STEP = 0.1 # s
num_steps = int(t_final / TIME_STEP) + 1
for i in range(num_steps):
    t = i * TIME_STEP
    vals = [TIME_STEP, s(t)[0], v(t)[0], a(t)[0], s(t)[1], v(t)[1], a(t)[1], s(t)[2], v(t)[2], a(t)[2]]
    print(",".join(f"{val:.6f}" for val in vals))
