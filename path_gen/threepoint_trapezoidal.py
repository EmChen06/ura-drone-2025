# https://www.desmos.com/calculator/rvbldbnmdz initial calculations
# https://www.desmos.com/calculator/mqykdgpcoq taking time and final position as inputs

import numpy as np

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
