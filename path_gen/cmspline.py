from pathlib import Path
from splines import CatmullRom, UnitSpeedAdapter, CubicHermite
import numpy as np
import json
import subprocess
import sys
from twopoint_trapezoidal import calculate_trajectory, t_accel_bounds

def main():
    CONFIG_PATH = Path(__file__).parent / "config.json"
    cfg = json.loads(CONFIG_PATH.read_text())

    waypoints = np.array(cfg["path_specifications"]["waypoints"], dtype=float)
    alpha = cfg["path_specifications"]["catmull_rom_alpha"]
    PATH_TIME = cfg["path_specifications"]["path_time"]
    V_MAX = cfg["path_specifications"]["v_max"]
    A_MAX = cfg["path_specifications"]["a_max"]
    T_ACCEL = cfg["path_specifications"]["t_accel"]

    ARC_REPARAM_POINTS = cfg["reparameterization"]["num_points"]

    CSV_TIME_STEP = cfg["output"]["csv_time_step"]
    OUTPUT_CSV = Path(cfg["output"]["figure8_csv"]).resolve()
    FLIGHT_SCRIPT = Path(cfg["output"]["figure8_script"]).resolve()
    PLOT_SCRIPT = Path(cfg["output"]["plot_script"]).resolve()
    PLOT_OUTPUT = Path(cfg["output"]["plot_output"]).resolve()

    print("Waypoints are:")
    for i, wp in enumerate(waypoints):
        print(f"  P{i}: {wp.tolist()}")
        
    spline = CatmullRom(waypoints, alpha=alpha) 

    end_t = spline.grid[-1]
    arcspline = UnitSpeedAdapter(spline)
    path_len = float(arcspline.grid[-1])

    points = []
    tangents = []
    lengths = []

    t_min, t_max = t_accel_bounds(path_len, PATH_TIME, V_MAX, A_MAX)
    t_mid = (t_min + t_max) / 2.0
    raw = input(f"Input T_ACCEL [{t_min:.4f}..{t_max:.4f}], Enter for {t_mid:.4f}: ").strip()
    if raw == "":
        T_ACCEL = t_mid
    else:
        T_ACCEL = float(raw)
    if not (t_min - 1e-6 <= T_ACCEL <= t_max + 1e-6):
        print(f"[ERROR] T_ACCEL={T_ACCEL} not within [{t_min}, {t_max}] exit")
        return

    for i in range(ARC_REPARAM_POINTS + 1):
        dist = path_len * i / ARC_REPARAM_POINTS * 0.999 # floating point error safety
        lengths.append(dist)
        t = arcspline._s2t(dist)
        points.append(spline.evaluate(t))
        tangents.append(spline.evaluate(t, n=1) / np.linalg.norm(spline.evaluate(t, n=1)))
        if i > 0 and i < ARC_REPARAM_POINTS:
            tangents.append(spline.evaluate(t, n=1) / np.linalg.norm(spline.evaluate(t, n=1)))

    arcspline2 = CubicHermite(points, tangents, lengths)
    path_len = float(arcspline2.grid[-1])

    s, v, a = calculate_trajectory(path_len, PATH_TIME, T_ACCEL)

    # print results in csv
    num_steps = int(PATH_TIME / CSV_TIME_STEP) + 1
    lines = []

    for i in range(num_steps):
        t = i * CSV_TIME_STEP
        vals = [CSV_TIME_STEP] + [0] * 32

        for dim in range(3):
            value = float(arcspline2.evaluate(s(t))[dim])
            deriv = float(arcspline2.evaluate(s(t), n=1)[dim])
            second_deriv = float(arcspline2.evaluate(s(t), n=2)[dim])

            vals[1 + dim * 8] = value # value
            vals[1 + dim * 8 + 1] = deriv * float(v(t)) # deriv
            vals[1 + dim * 8 + 2] = second_deriv * float(v(t)) ** 2 + deriv * float(a(t)) # second deriv
            # set third deriv to just be 0
        line = ",".join(f"{val:.6f}" for val in vals) + ","
        lines.append(line)

    ans = input("Trajectory CSV generated successfully. Replace the old one? (y/n):").strip().lower()
    if ans != "y":
        print("[INFO] new CSV dumped")
    else:
        HEADER = [
        "duration",
        "x^0","x^1","x^2","x^3","x^4","x^5","x^6","x^7",
        "y^0","y^1","y^2","y^3","y^4","y^5","y^6","y^7",
        "z^0","z^1","z^2","z^3","z^4","z^5","z^6","z^7",
        "yaw^0","yaw^1","yaw^2","yaw^3","yaw^4","yaw^5","yaw^6","yaw^7"
    ]
        with OUTPUT_CSV.open("w") as f:
            f.write(",".join(HEADER) + "\n")
            for line in lines:
                f.write(line + "\n")
        print(f"[DONE] Trajectory CSV loaded: {OUTPUT_CSV}")
        print("[INFO] Generating trajectory plot...")
        try:
            subprocess.run(
                [
                    sys.executable,
                    str(PLOT_SCRIPT),
                    "--csv",
                    str(OUTPUT_CSV),
                    "--out",
                    str(PLOT_OUTPUT),
                    "--show",  # auto open figure8_trajectory.png
                ],
                check=False,
            )
        except Exception as e:
            print(f"[WARN] Failed to run plot script: {e}")

    fly = input("Launch drone now? (y/n): ").strip().lower()
    if fly == "y":
        print("[LAUNCH] Running")
        subprocess.run([sys.executable, str(FLIGHT_SCRIPT)])
    else:
        print("[DONE] Flight skipped.")

if __name__ == "__main__":
    main()