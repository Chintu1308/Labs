import numpy as np

# Example system of equations:
# 2x + 3y = 8
# 3x + 4y = 11

# Coefficient matrix (A)
A = np.array([[2, 3],
              [3, 4]])

# Result matrix (B)
B = np.array([8, 11])

# Solve the system of equations
solution = np.linalg.solve(A, B)

# Print the solution (values of x and y)
print("Solution: ", solution)

#Example system of Matrix

# Define the coefficient matrix A
A = np.array([[3, 1, -1],
              [2, 4, 1],
              [-1, 2, 5]])

# Define the result matrix B
B = np.array([4, 1, 1])

# Solve the system Ax = B
x = np.linalg.solve(A, B)

# Print the solution vector x
print("Solution for x is: ", x)