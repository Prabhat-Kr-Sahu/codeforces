from PIL import Image

# Load the uploaded image to examine it
image_path = 'WhatsApp Image 2024-10-10 at 19.10.04_c32f2b23.jpg'
image = Image.open(image_path)
image.show()