#!/usr/bin/env python3
"""
Plot a trajectory from a CSV produced by the drone trajectory generator
(see `crazyswarm2/.../data/figure8.csv`).

This script reads the CSV, extracts `x^0`, `y^0`, `z^0` (the position columns),
computes timestamps from the `duration` column, and creates:
 - a 3D trajectory PNG (`outputs/figure8_trajectory.png`)
 - per-snapshot PNGs at evenly spaced times in `outputs/snapshots/`
 - an optional display when run interactively

Usage:
    python tools/plot_figure8.py [--csv PATH] [--n-snapshots N]

"""
import os
import csv
import argparse
import sys
import math
import numpy as np
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D


def read_figure_csv(path):
    with open(path, "r", newline="") as f:
        reader = csv.reader(f)
        header = next(reader)
        rows = [r for r in reader if r]

    idx = {h: i for i, h in enumerate(header)}
    # required columns
    for col in ("duration", "x^0", "y^0", "z^0"):
        if col not in idx:
            raise ValueError(f"Required column '{col}' not found in CSV header")

    durations = [float(r[idx["duration"]]) for r in rows]
    # assume duration is the timestep for every row (common in these CSVs)
    if len(durations) == 0:
        return np.array([]), np.array([]), np.array([]), np.array([])

    dt = durations[0]
    times = np.arange(len(rows)) * dt

    xs = np.array([float(r[idx["x^0"]]) for r in rows])
    ys = np.array([float(r[idx["y^0"]]) for r in rows])
    zs = np.array([float(r[idx["z^0"]]) for r in rows])

    # yaw optional
    yaw = None
    if "yaw^0" in idx:
        yaw = np.array([float(r[idx["yaw^0"]]) for r in rows])

    return times, xs, ys, zs, yaw


def plot_and_save(times, xs, ys, zs, yaw=None, n_snapshots=12, out_dir="outputs"):
    os.makedirs(out_dir, exist_ok=True)
    snap_dir = os.path.join(out_dir, "snapshots")
    os.makedirs(snap_dir, exist_ok=True)

    # Main 3D trajectory + time-labeled snapshot points
    fig = plt.figure(figsize=(12, 6))
    ax3d = fig.add_subplot(1, 2, 1, projection="3d")
    ax3d.plot(xs, ys, zs, "-", color="#1f77b4", label="trajectory")
    ax3d.scatter(xs[0], ys[0], zs[0], color="green", s=60, label="start")
    ax3d.scatter(xs[-1], ys[-1], zs[-1], color="red", s=60, label="end")

    # evenly spaced snapshot indices
    if len(times) == 0:
        raise ValueError("No data points to plot")
    indices = np.linspace(0, len(times) - 1, min(n_snapshots, len(times)), dtype=int)
    cmap = plt.cm.viridis
    for i, ind in enumerate(indices):
        c = cmap(i / max(1, len(indices) - 1))
        ax3d.scatter(xs[ind], ys[ind], zs[ind], color=c, s=40)
        # small offset for label placement to avoid overlap
        ax3d.text(xs[ind], ys[ind], zs[ind], f"{times[ind]:.2f}s", size=8)

    ax3d.set_xlabel("x")
    ax3d.set_ylabel("y")
    ax3d.set_zlabel("z")
    ax3d.set_title("3D Trajectory with snapshots")
    ax3d.legend()

    # 2D subplots: x,y,z vs time
    ax_x = fig.add_subplot(3, 2, 2)
    ax_x.plot(times, xs, "-", color="#1f77b4")
    ax_x.set_title("x vs time")
    ax_x.set_xlabel("t (s)")

    ax_y = fig.add_subplot(3, 2, 4)
    ax_y.plot(times, ys, "-", color="#ff7f0e")
    ax_y.set_title("y vs time")
    ax_y.set_xlabel("t (s)")

    ax_z = fig.add_subplot(3, 2, 6)
    ax_z.plot(times, zs, "-", color="#2ca02c")
    ax_z.set_title("z vs time")
    ax_z.set_xlabel("t (s)")

    plt.tight_layout()
    main_path = os.path.join(out_dir, "figure8_trajectory.png")
    fig.savefig(main_path, dpi=200)
    plt.close(fig)

    print(f"Saved main trajectory figure to: {main_path}")

    # Produce per-snapshot smaller 3D views
    half_span = max(1, int(len(times) * 0.02))  # number of points before/after to show
    for i, ind in enumerate(indices):
        fig2 = plt.figure(figsize=(5, 4))
        ax = fig2.add_subplot(111, projection="3d")
        start = max(0, ind - half_span)
        end = min(len(times), ind + half_span + 1)
        ax.plot(xs[start:end], ys[start:end], zs[start:end], "-k", alpha=0.6)
        ax.scatter(xs[ind], ys[ind], zs[ind], color="#d62728", s=80)
        ax.set_xlabel("x")
        ax.set_ylabel("y")
        ax.set_zlabel("z")
        ax.set_title(f"t = {times[ind]:.2f} s")
        out_path = os.path.join(snap_dir, f"frame_{i:03d}_t{times[ind]:.2f}s.png")
        fig2.savefig(out_path, dpi=150)
        plt.close(fig2)

    print(f"Saved {len(indices)} snapshot images to: {snap_dir}")


def main():
    parser = argparse.ArgumentParser(description="Plot drone trajectory CSV (figure8 style)")
    parser.add_argument("--csv", "-c", default=os.path.join("crazyswarm2", "src", "crazyswarm2", "crazyflie_examples", "crazyflie_examples", "data", "figure8.csv"),
                        help="Path to CSV file (default: repository sample)")
    parser.add_argument("--n-snapshots", "-n", type=int, default=12, help="Number of snapshot frames to export")
    parser.add_argument("--out", "-o", default="outputs", help="Output directory")
    parser.add_argument("--show", action="store_true", help="Show main figure interactively (blocking)")
    args = parser.parse_args()

    csv_path = args.csv

    def find_repo_root(start_dir):
        # climb up until we find a likely repo root (README.md, .git, or crazyswarm2 folder)
        p = os.path.abspath(start_dir)
        for _ in range(10):
            if os.path.exists(os.path.join(p, "README.md")):
                return p
            if os.path.exists(os.path.join(p, ".git")):
                return p
            if os.path.isdir(os.path.join(p, "crazyswarm2")):
                return p
            parent = os.path.dirname(p)
            if parent == p:
                break
            p = parent
        return None

    # If the provided path is absolute, use it. If not, try several sensible locations:
    tried = []
    resolved = None
    if os.path.isabs(csv_path):
        tried.append(csv_path)
        if os.path.exists(csv_path):
            resolved = csv_path
    else:
        # 1) path relative to current working directory
        p1 = os.path.join(os.getcwd(), csv_path)
        tried.append(p1)
        if os.path.exists(p1):
            resolved = p1

        # 2) path relative to repository root (climb from this script)
        if resolved is None:
            script_dir = os.path.dirname(os.path.abspath(__file__))
            repo_root = find_repo_root(script_dir)
            if repo_root:
                p2 = os.path.join(repo_root, csv_path)
                tried.append(p2)
                if os.path.exists(p2):
                    resolved = p2

    if resolved is None:
        sample = tried[0] if tried else csv_path
        raise FileNotFoundError(f"CSV file not found: {csv_path}\nTried: {tried}")

    csv_path = resolved

    times, xs, ys, zs, yaw = read_figure_csv(csv_path)
    plot_and_save(times, xs, ys, zs, yaw=yaw, n_snapshots=args.n_snapshots, out_dir=args.out)

    if args.show:
        # show the last saved main figure
        import subprocess
        main_path = os.path.join(args.out, "figure8_trajectory.png")
        if os.name == 'nt':
            # windows: start
            subprocess.run(["start", "", main_path], shell=True)
        else:
            if sys.platform == "darwin":   # macOS
                subprocess.run(["open", main_path])
            else:           #linux
                subprocess.run(["xdg-open", main_path])

if __name__ == "__main__":
    main()
