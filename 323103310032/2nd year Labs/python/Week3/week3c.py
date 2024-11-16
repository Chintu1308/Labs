import numpy as np

arr2 = np.array([[1, 2, 3], [4, 5, 6], [7, 8, 9]])

print("The array is: ", arr2)
print("Maximum element in the array: ", np.max(arr2))
print("Minimum element in the array: ", np.min(arr2))
print("Maximum element in all rows: ", np.max(arr2, axis=1))  # axis=1 for rows
print("Minimum element in all columns: ", np.min(arr2, axis=0))  # axis=0 for columns
print("Sum of all elements in the array: ", np.sum(arr2))
print("Sum of all elements in each column: ", np.sum(arr2, axis=0))
print("Sum of all elements in each row: ", np.sum(arr2, axis=1))
print("Cumulative sum of all elements in the array: ", np.cumsum(arr2))
print("Cumulative sum of all elements in each column: ", np.cumsum(arr2, axis=0))
print("Cumulative sum of all elements in each row: ", np.cumsum(arr2, axis=1))