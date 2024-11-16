import numpy as np

arr2 = np.array([[1, 2, 3], [4, 5, 6], [7, 8, 9]])
print("***Slicing***")
print("Array: ", arr2)
print("First row: ", arr2[0])
print("First column: ", arr2[:, 0])
print("Last column: ", arr2[:, -1])
print("***Integer array indexing***")
rows = [0, 2]
cols = [1, 2]
int_indexing = arr2[rows, cols]
print("Integer Indexing: ", int_indexing)
print("***Boolean array indexing***")
bool_indexing = arr2[arr2 > 5]
print("Boolean Indexing: ", bool_indexing)
