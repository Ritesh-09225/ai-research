# metric is used to compute the distance between two points in a vector space. It is defined as the square root of the sum of the squared differences between corresponding coordinates of the two points. The metric can be used in various applications such as clustering, classification, and optimization problems.
import numpy as np

p1 = np.array([1.0, 2.0, 3.0])
p2 = np.array([4.0, 5.0, 6.0])

distance = np.sqrt(np.sum((p1 - p2) ** 2))  # Euclidean distance
distance_manhattan = np.sum(np.abs(p1 - p2))  # Manhattan distance
print(f"Distance: {distance:.2f}, Manhattan: {distance_manhattan:.2f}")

