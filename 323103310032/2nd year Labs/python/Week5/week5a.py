import numpy as np
from PIL import Image

# Create a 500x500 white image using numpy
white_array = np.ones((500, 500, 3), dtype=np.uint8) * 255

# Convert the numpy array to a PIL image
white_image = Image.fromarray(white_array)

# Save the white image to a file
white_image.save("white.png")

# Create a 500x500 black image with the red channel set to 255
red_array = np.zeros((500, 500, 3), dtype=np.uint8)
red_array[:, :, 0] = 255  # Set the red channel to 255

# Convert the numpy array to a PIL image
red_image = Image.fromarray(red_array)

# Save the red image to a file and display it
red_image.save("red.png")
red_image.show()
