import csv
import numpy as np

def validate_time(csv_path, A_MAX, V_MAX):
    """
    Read trajectory CSV and compute max velocity and acceleration magnitudes.    
  
    Returns:
        Dictionary with computed max values and validation results
    """
    with open(csv_path, "r", newline="") as f:
        reader = csv.reader(f)
        header = next(reader)
        rows = [r for r in reader if r]
    
    idx = {h: i for i, h in enumerate(header)}
    
    # Extract velocity and acceleration components (already computed in CSV)
    vx = np.array([float(r[idx["x^1"]]) for r in rows])
    vy = np.array([float(r[idx["y^1"]]) for r in rows])
    vz = np.array([float(r[idx["z^1"]]) for r in rows])
    
    ax = np.array([float(r[idx["x^2"]]) for r in rows])
    ay = np.array([float(r[idx["y^2"]]) for r in rows])
    az = np.array([float(r[idx["z^2"]]) for r in rows])
    
    velocity = np.sqrt(vx**2 + vy**2 + vz**2)
    acceleration = np.sqrt(ax**2 + ay**2 + az**2)
    
    max_velocity = float(np.max(velocity))
    max_acceleration = float(np.max(acceleration))
    
    v_ok = max_velocity <= V_MAX
    a_ok = max_acceleration <= A_MAX
    
    results = {
        "max_velocity": max_velocity,
        "max_acceleration": max_acceleration,
        "v_threshold": V_MAX,
        "a_threshold": A_MAX,
        "velocity_valid": v_ok,
        "acceleration_valid": a_ok,
        "all_valid": v_ok and a_ok
    }
    
    return results

if __name__ == "__main__":
    csv_path = r"C:\Users\samcy\crazyswarm2\src\crazyswarm2\crazyflie_examples\crazyflie_examples\data\figure8.csv"
    
    results = validate_time(csv_path, A_MAX=2.0, V_MAX=1.0)
    
    print(f"Max Velocity: {results['max_velocity']:.4f} m/s (threshold: {results['v_threshold']} m/s) - {'✓' if results['velocity_valid'] else '✗'}")
    print(f"Max Acceleration: {results['max_acceleration']:.4f} m/s² (threshold: {results['a_threshold']} m/s²) - {'✓' if results['acceleration_valid'] else '✗'}")
    print(f"Overall Valid: {'YES' if results['all_valid'] else 'NO'}")