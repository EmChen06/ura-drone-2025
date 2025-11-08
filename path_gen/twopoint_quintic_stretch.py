import numpy as np
import math

vel_constraint = 0.5  # units per second
acc_constraint = 1.0  # units per second squared

points = [np.array([0.0, 0.0, 0.0]), np.array([0.5, 0.0, 0.0])]

initial_v = np.array([0.0, 0.0, 0.0])
final_v = np.array([0.0, 0.0, 0.0])
initial_a = np.array([0.0, 0.0, 0.0])
final_a = np.array([0.0, 0.0, 0.0])


A = np.array([[1,  0,  0,  0,  0,  0],
              [0,  1,  0,  0,  0,  0],
              [0,  0,  2,  0,  0,  0],
              [1,  1,  1,  1,  1,  1],
              [0,  1,  2,  3,  4,  5],
              [0,  0,  2,  6, 12, 20]])

A_inv = np.linalg.inv(A)

b = np.array([[points[0][0]],
              [initial_v[0]],
              [initial_a[0]],
              [points[1][0]],
              [final_v[0]],
              [final_a[0]]])

# flatten and reverse (polyval expects reverse order)
coeffs_x = (A_inv @ b).flatten()[::-1]

print(coeffs_x)

for i in range(11):
    t = i * 1 / 10
    pos = np.polyval(coeffs_x, t)
    vel = np.polyval(np.polyder(coeffs_x), t)
    acc = np.polyval(np.polyder(np.polyder(coeffs_x)), t)
    print(f"{t}:\t{pos:.3f}\t{vel:.3f}\t{acc:.3f}")

# find max velocity and acceleration from 0 to 1
d2 = np.polyder(np.polyder(coeffs_x)) 
d1 = np.polyder(coeffs_x)

vel_critical_points = np.roots(d2)
acc_critical_points = np.roots(np.polyder(d2))

vel_candidates = [abs(np.polyval(d1, t.real)) for t in vel_critical_points if np.isreal(t) and 0 <= t.real <= 1] + \
                 [abs(np.polyval(d1, 0)), abs(np.polyval(d1, 1))]
max_vel_abs = max(vel_candidates)

acc_candidates = [abs(np.polyval(d2, t.real)) for t in acc_critical_points if np.isreal(t) and 0 <= t.real <= 1] + \
                 [abs(np.polyval(d2, 0)), abs(np.polyval(d2, 1))]
max_acc_abs = max(acc_candidates)

print(f"Max velocity: {max_vel_abs:.3f}\nMax acceleration: {max_acc_abs:.3f}")

stretch_factor = min(vel_constraint / max_vel_abs, math.sqrt(acc_constraint / max_acc_abs), 1.0)

print(f"Stretch factor: {stretch_factor:.3f}")

newpoly = coeffs_x * np.array([stretch_factor**i for i in range(len(coeffs_x)-1, -1, -1)])

print(newpoly)

for i in range(11):
    t = i * 1 / 10 / stretch_factor
    pos = np.polyval(newpoly, t)
    vel = np.polyval(np.polyder(newpoly), t)
    acc = np.polyval(np.polyder(np.polyder(newpoly)), t)
    print(f"{t:.3f}:\t{pos:.3f}\t{vel:.3f}\t{acc:.3f}")