import numpy as np
u = np.array([1, 2, 3])
v = np.array([4, 5, 6])
c = 2

lhs = c * (u + v)
rhs = c * u + c * v

print("Left-hand side:", lhs)
print("Right-hand side:", rhs)
print("Are they equal?", np.array_equal(lhs, rhs))


