import numpy as np

vector_a = np.array([1, 2, 3])
vector_b = np.array([4, 5, 6])
matrix_a = np.array([[1, 2, 3], [4, 5, 6], [7, 8, 9]])
matrix_b = np.array([[9, 8, 7], [6, 5, 4], [3, 2, 1]])

print("Vector a:", vector_a)
print("Vector b:", vector_b)
print("Dot product of vector a and b:", np.dot(vector_a, vector_b))  # 1*4 + 2*5 + 3*6
print("\nMatrix a:\n", matrix_a)
print("Matrix b:\n", matrix_b)
print("Dot product of matrix a and b:\n", np.dot(matrix_a, matrix_b))  # matrix multiplication
print("\nInner product of vector a and b:", np.inner(vector_a, vector_b))
print("Inner product of matrix a and b:\n", np.inner(matrix_a, matrix_b))
print("\nOuter product of vector a and b:\n", np.outer(vector_a, vector_b))
print("Outer product of matrix a and b:\n", np.outer(matrix_a, matrix_b))
print("\nMatrix a raised to the power 2:\n", np.linalg.matrix_power(matrix_a, 2))