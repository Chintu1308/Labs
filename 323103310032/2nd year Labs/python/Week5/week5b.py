import numpy as np
from PIL import Image

# Python program to convert image to array
img_path = r"C:\Users\bhhc1\Desktop\Hari Hara Charan\323103310032\2nd year Labs\python\Week5\white.png"
img = Image.open(img_path)
img_array = np.array(img)

# Output is a 3D array with the value of each pixel in the image in the shape of (height, width, 3)
print(img_array)