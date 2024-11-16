import numpy as np

l = [1, 2, 3, 4, 5]
# Converting list to numpy array and making the data type as float16
arr1 = np.array(l, dtype='float16')

# Converting tuple to numpy array and making the data type as float
t = (6, 7, 8, 9, 10)
arr2 = np.array(t, dtype=float)

print(arr1)
print(arr2)

arr3 = np.array([2, 4, 5])
print(arr3)

print(arr1.dtype)
print(arr2.dtype)  # Default data type is float64
print(arr1.size)
print(arr1.itemsize)