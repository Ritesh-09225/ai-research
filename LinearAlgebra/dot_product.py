import numpy as np

a = np.array([1.0, 2.0, 3.0])
b = np.array([4.0, -1.0, 2.0])

dot = np.dot(a, b)
angle = np.arccos(dot / (np.linalg.norm(a) * np.linalg.norm(b)))

print(f"Dot product: {dot}")
print(f"Angle: {np.degrees(angle):.1f}°")