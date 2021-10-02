
#importing all the useful libraries
import numpy as np
import cv2
import pandas as pd
import matplotlib.pyplot as plt


#reading images from dataset
center = cv2.imread('/home/aabir/Documents/Machine Learning/python/center.jpeg')
center = cv2.cvtColor(center,cv2.COLOR_BGR2RGB)
bottom_left = cv2.imread('/home/aabir/Documents/Machine Learning/python/bottom_left.jpg')
bottom_left = cv2.cvtColor(bottom_left,cv2.COLOR_BGR2RGB)
bottom_right = cv2.imread('/home/aabir/Documents/Machine Learning/python/bottom_right.jpg')
bottom_right = cv2.cvtColor(bottom_right,cv2.COLOR_BGR2RGB)
top_left = cv2.imread('/home/aabir/Documents/Machine Learning/python/top_left.jpg')
top_left = cv2.cvtColor(top_left,cv2.COLOR_BGR2RGB)
top_right = cv2.imread('/home/aabir/Documents/Machine Learning/python/top_right.jpg')
top_right = cv2.cvtColor(top_right,cv2.COLOR_BGR2RGB)


#plotting all images
plt.imshow(center)
plt.show()
plt.imshow(top_left)
plt.show()
plt.imshow(top_right)
plt.show()
plt.imshow(bottom_left)
plt.show()
plt.imshow(bottom_right)
plt.show()


#printing the shapes of the images
print(center.shape)
print(top_left.shape)
print(top_right.shape)
print(bottom_left.shape)
print(bottom_right.shape)



#resizing the images as per the necessity
center = cv2.resize(center,(100,100))
top_left = cv2.resize(top_left,(200,200))
top_right = cv2.resize(top_right,(200,200))
bottom_left = cv2.resize(bottom_left,(200,200))
bottom_right = cv2.resize(bottom_right,(200,200))


#printing the shapes to check the resized images
print(center.shape)
print(top_left.shape)
print(top_right.shape)
print(bottom_left.shape)
print(bottom_right.shape)


#plotting all resized images
plt.imshow(center)
plt.show()
plt.imshow(top_left)
plt.show()
plt.imshow(top_right)
plt.show()
plt.imshow(bottom_left)
plt.show()
plt.imshow(bottom_right)
plt.show()



#preparing a blank canvas to place the collage
def create_blank_black_canvas(width, height):
    image = np.zeros((height, width, 3), np.uint8)
    return image

#plotting the canvas
canvas = create_blank_black_canvas(430, 430)
canvas_for_center = create_blank_black_canvas(120, 120)
plt.imshow(canvas)
plt.show()
plt.imshow(canvas_for_center)
plt.show()

canvas_for_center[10:110,10:110] = center
plt.imshow(canvas_for_center)
plt.show()


#placing the images on the canvas as per the desired positions
canvas[10:210,10:210] = top_left
canvas[10:210,220:420] = top_right
canvas[220:420,10:210] = bottom_left
canvas[220:420,220:420] = bottom_right
canvas[155:275,155:275] = canvas_for_center
plt.imshow(canvas)
plt.show()

#changing color to bgr and saving the image
canvas = cv2.cvtColor(canvas,cv2.COLOR_RGB2BGR)
cv2.imwrite('collage_image.jpeg',canvas)


#creating the necessary csv file
r_channel = canvas[:,:,2]
g_channel = canvas[:,:,1]
b_channel = canvas[:,:,0]

r_channel = r_channel.reshape((430*430,1))
g_channel = g_channel.reshape((430*430),1)
b_channel = b_channel.reshape((430*430),1)

img = np.hstack((r_channel,g_channel,b_channel))

print(img.shape)

df = pd.DataFrame(img,columns=['r','g','b'])
df.to_csv("Final.csv",index=False)

