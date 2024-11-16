import numpy as np

arr = np.array([[1, 2, 3], [4, 5, 6]])
print("The array is: ", arr)
print("The dimensions of the array is: ", arr.ndim)

print("*** Changing dimension type of the array ***")
arr = np.array([[1, 2, 3], [4, 5, 6]], ndmin=5)
print("The dimensions of the array is: ", arr.ndim)
print("The array is: ", arr)
print("The shape of the array is: ", arr.shape)

print("*** Changing the shape of the array ***")
arr = arr.reshape(3, 2)
print(arr)
print("The shape of the array is: ", arr.shape)
print("The size of the array is: ", arr.size)
print("The data type of the array is: ", arr.dtype)

print("*** Changing the data type of the array ***")
arr = arr.astype(float)
print(arr)
print("The data type of the array is: ", arr.dtype)
print("The item size of the array is: ", arr.itemsize)