import numpy as np

# Sorting
a = np.array([[12, 5], [10, 35]])
print("Along y-axis:", np.sort(a, axis=0))
print("Along x-axis:", np.sort(a, axis=1))
print("Flattened array:", np.sort(a, axis=None))

# Searching
arr = np.array([1, 2, 3, 3, 4, 5, 6, 4, 5])
x = np.where(arr == 4)
print("Index where 4 is present:", x)
arr1 = np.array([1, 2, 3, 4, 6, 7, 8, 9, 10])
y = np.searchsorted(arr1, 4)
print("Index where 4 should be inserted:", y)

# Counting
arr2 = np.array([[1, 2, 3, 4, 5], [6, 7, 8, 9, 10], [1, 2, 3, 4, 5], [6, 7, 8, 9, 10]])
count_4 = np.count_nonzero(arr2 == 4)
print("Number of times 4 appears in arr2:", count_4)
unique, counts = np.unique(arr2, return_counts=True)
count_dict = {int(k): int(v) for k, v in zip(unique, counts)}
print("Count of each unique element in arr2:", count_dict)
unique1 = np.unique(arr2)
print("Unique elements are:", unique1)
count1 = np.unique(arr2, return_counts=True)
print(count1)