# norm is used to calculate the size of a vector.
import numpy as np

v = np.array([3.0, -4.0, 1.0])

l1 = np.sum(np.abs(v))            #L1 norm

#L2 norm
l2 = np.sqrt(np.sum(v ** 2))

print(f"L1: {l1}, L2: {l2:.2f}")