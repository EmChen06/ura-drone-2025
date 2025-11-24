from splines import CatmullRom, UnitSpeedAdapter, CubicHermite
import numpy as np

from twopoint_trapezoidal import calculate_trajectory

waypoints = np.array([
    [0.0, 0.0,  0.0],
    [0.1, 0.1, -0.1],
    [0.4, 0.1, -0.5],
    [0.6, 0.1, -0.6],
    [0.2, 0.1, -0.6]
])

spline = CatmullRom(waypoints, alpha=0.5) # 0.5 for centripetal spline

NUM_POINTS = 100

end_t = spline.grid[-1]
arcspline = UnitSpeedAdapter(spline)
path_len = float(arcspline.grid[-1])

points = []
tangents = []
lengths = []

for i in range(NUM_POINTS + 1):
    dist = path_len * i / NUM_POINTS
    lengths.append(dist)

    t = arcspline._s2t(dist)

    # point on curve
    p = spline.evaluate(t)
    points.append(p)

# Now compute tangents FOR EACH SEGMENT (two per segment)
for i in range(NUM_POINTS):
    t0 = arcspline._s2t(path_len * i / NUM_POINTS)
    t1 = arcspline._s2t(path_len * (i+1) / NUM_POINTS)

    v0 = spline.evaluate(t0, n=1)
    v1 = spline.evaluate(t1, n=1)

    tangents.append(v0)
    tangents.append(v1)


arcspline2 = CubicHermite(points, tangents, lengths)

s, v, a = calculate_trajectory(path_len, 5.0, 2.0, 1.0)

# print results in csv format
TIME_STEP = 0.1 # s
num_steps = int(5.0 / TIME_STEP) + 1
for i in range(num_steps):
    t = i * TIME_STEP
    vals = [TIME_STEP] + [0] * 32
    for deriv in range(8):
        for dim in range(3):
            vals[1 + dim * 8 + deriv] = float(arcspline2.evaluate(s(t), n=deriv)[dim])

    print(",".join(f"{val:.6f}" for val in vals) + ",")