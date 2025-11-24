from splines import CatmullRom, UnitSpeedAdapter, CubicHermite
import numpy as np

from twopoint_trapezoidal import calculate_trajectory

waypoints = np.array([
    [0.0, 0.0, 0.0],
    [0.3, 0.0, 0.1],
    [0.3, 0.3, 0.2]
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
    points.append(spline.evaluate(t))
    tangents.append(spline.evaluate(t, n=1) / np.linalg.norm(spline.evaluate(t, n=1)))
    if i > 0 and i < NUM_POINTS:
        tangents.append(spline.evaluate(t, n=1) / np.linalg.norm(spline.evaluate(t, n=1)))

arcspline2 = CubicHermite(points, tangents, lengths)

PATH_TIME = 5.0

s, v, a = calculate_trajectory(path_len, PATH_TIME, 1.0, 1.0)

# print results in csv format
TIME_STEP = 0.1 # s
num_steps = int(PATH_TIME / TIME_STEP) + 1
for i in range(num_steps):
    t = i * TIME_STEP
    vals = [TIME_STEP] + [0] * 32

    for dim in range(3):
        value = float(arcspline2.evaluate(s(t))[dim])
        deriv = float(arcspline2.evaluate(s(t), n=1)[dim])
        second_deriv = float(arcspline2.evaluate(s(t), n=2)[dim])

        vals[1 + dim * 8] = value # value
        vals[1 + dim * 8 + 1] = deriv * float(v(t)) # deriv
        vals[1 + dim * 8 + 2] = second_deriv * float(v(t)) ** 2 + deriv * float(a(t)) # second deriv
        # set third deriv to just be 0

    # for deriv in range(3):
    #     for dim in range(3):
    #         vals[1 + dim * 8 + deriv] = float(arcspline2.evaluate(s(t), n=deriv)[dim])

    print(",".join(f"{val:.6f}" for val in vals) + ",")