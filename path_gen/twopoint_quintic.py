import numpy as np

N_POINTS = 2

points = [np.array([0.0, 0.0, 0.0]), np.array([0.5, 0.0, 0.0])]

initial_v = np.array([0.0, 0.0, 0.0])
final_v = np.array([0.0, 0.0, 0.0])
initial_a = np.array([0.0, 0.0, 0.0])
final_a = np.array([0.0, 0.0, 0.0])

times = [0, 3.0]

A = np.zeros((6, 6))
b = np.zeros((6, 1))

A[0] = [1, times[0], times[0]**2, times[0]**3, times[0]**4, times[0]**5]
b[0][0] = points[0][0]
A[1] = [0, 1, 2*times[0], 3*times[0]**2, 4*times[0]**3, 5*times[0]**4]
b[1][0] = initial_v[0]
A[2] = [0, 0, 2, 6*times[0], 12*times[0]**2, 20*times[0]**3]
b[2][0] = initial_a[0]

A[3] = [1, times[1], times[1]**2, times[1]**3, times[1]**4, times[1]**5]
b[3][0] = points[1][0]
A[4] = [0, 1, 2*times[1], 3*times[1]**2, 4*times[1]**3, 5*times[1]**4]
b[4][0] = final_v[0]
A[5] = [0, 0, 2, 6*times[1], 12*times[1]**2, 20*times[1]**3]
b[5][0] = final_a[0]

coeffs_x = np.linalg.solve(A, b)

print(coeffs_x)

for i in range(11):
    t = i * times[1] / 10
    pos = np.polyval(coeffs_x, t)
    print(f"{t}: {pos}")