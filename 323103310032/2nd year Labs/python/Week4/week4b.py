import numpy as np
arr = np.array([[1, 2, 3],[2, 3, 4],[4, 5, 6]])
print("The matrix is: ", arr)
a, b = np.linalg.eig(arr)
print("The eigenvalues of the matrix are ", a)
arr = np.array([[1, 2, 3], [2, 3, 4], [4, 5, 6]])
print("The matrix is: ", arr)

a, b = np.linalg.eig(arr)
print("The eigenvalues of the matrix are ", a)
print("The eigenvectors of the matrix are ", b)