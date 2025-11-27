# https://www.desmos.com/calculator/rvbldbnmdz initial calculations
# https://www.desmos.com/calculator/mqykdgpcoq taking time and final position as inputs

import numpy as np

# param s_final: final position (N-D vector or scalar)
# param t_final: final time (scalar)
# param V_MAX: maximum velocity (scalar, magnitude)
# param A_MAX: maximum acceleration (scalar, magnitude)
# returns: functions s(t), v(t), a(t) giving position, velocity, acceleration at time t
def t_accel_bounds(s_final, t_final, V_MAX, A_MAX):
    # calculate t_accel bounds
    # these are calculated from solving |v_peak| < V_MAX (t_accel upper bound) and
    # |a_peak| < A_MAX (t_accel lower bound) inequalities
    # and the fact that t_accel must be less than t_final / 2
    s_norm = float(np.linalg.norm(s_final))
    t_accel_max = min(t_final / 2, t_final - s_norm / V_MAX)

    discriminant = t_final**2 - 4 * (s_norm / A_MAX)
    if discriminant < 0:
        raise ValueError(
            f"No valid solution for the given constraints; discriminant {discriminant} < 0"
        )
    t_accel_min = max(0, (t_final - np.sqrt(discriminant)) / 2)

    return t_accel_min, t_accel_max


def calculate_trajectory(s_final, t_final, t_accel):
    # check if s_final is scalar
    if np.isscalar(s_final):
        dim = 1
        scalar = True
    else:
        dim = s_final.shape[0]
        scalar = False

    # intermediate calculations
    t_2 = t_final - t_accel
    v_peak = s_final * (1 / t_2)
    a_peak = v_peak / t_accel

    # final formulas
    def a(t):
        if t < t_accel:
            return a_peak
        elif t < t_2:
            if scalar:
                return 0.0
            else:
                return np.zeros(dim)
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
        
    return s, v, a


if __name__ == "__main__":
    # example usage
    s_final = np.array([1.0, 0.5, -0.2]).T # m
    t_final = 2.5  # s
    V_MAX = 2.0  # m/s
    A_MAX = 1.0  # m/s^2

    t_accel_min, t_accel_max = t_accel_bounds(s_final, t_final, V_MAX, A_MAX)

    t_accel = float(input(f"Input T_ACCEL [{t_accel_min:.4f}, {t_accel_max:.4f}]: ").strip())

    s, v, a = calculate_trajectory(s_final, t_final, t_accel)

    # print results in csv format
    TIME_STEP = 0.1 # s
    num_steps = int(t_final / TIME_STEP) + 1
    for i in range(num_steps):
        t = i * TIME_STEP
        vals = [TIME_STEP, s(t)[0], v(t)[0], a(t)[0], 0, 0, 0, 0, 0, \
                s(t)[1], v(t)[1], a(t)[1], 0, 0, 0, 0, 0, \
                s(t)[2], v(t)[2], a(t)[2], 0, 0, 0, 0, 0, \
                0, 0, 0, 0, 0, 0, 0, 0]
        print(",".join(f"{val:.6f}" for val in vals) + ",")
