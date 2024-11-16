import numpy as np

# Python program to demonstrate the use of reshape() function in numpy
a = np.array([[1, 2, 3, 4, 5], [6, 7, 8, 9, 10]])
print("Original array:", a)
print("Shape of the array:", a.shape)

newa = a.reshape(5, 2)
print("Reshaped array:", newa)
print("Shape of the reshaped array:", newa.shape)
