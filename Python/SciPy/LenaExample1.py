# -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file.
"""


import matplotlib.pyplot as plt
from mymodule import lena


img = lena()
plt.gray()
plt.imshow(img)

plt.show()

print(img[0:3, 0:7])
img[1,1:6] = 0
print(img[0:3, 0:7])
