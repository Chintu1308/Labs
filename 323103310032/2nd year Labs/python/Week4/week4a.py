import numpy as np

arr = np.array([[1, 2, 3], [4, 5, 6], [7, 10, 9]])
print("The matrix is:", arr)
print("The rank of the matrix is", np.linalg.matrix_rank(arr))
print("The trace of the matrix is", np.trace(arr))
print("The determinant of the matrix is", np.linalg.det(arr))