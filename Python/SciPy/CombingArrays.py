# -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file.
"""

import scipy.ndimage
import numpy as np
import matplotlib.pyplot as plt

text = scipy.ndimage.imread('Chap_02_text_image.png')
text = np.mean(text.astype(float)/255, -1) * 2 - 1

letterE = text[37:53, 275:291]
corr = scipy.ndimage.correlate(text, letterE)
eLocations = (corr >= 0.95 * corr.max())

CorrLocIndex = np.where(eLocations == True)
x = CorrLocIndex[1]
print(x)

y = CorrLocIndex[0]
print(y)

thefig = plt.figure()
plt.subplot(211)
plt.imshow(text, cmap=plt.cm.gray, interpolation='nearest')
plt.axis('off')

plt.subplot(212)
plt.imshow(text, cmap=plt.cm.gray, interpolation='nearest')
plt.autoscale(False)
plt.plot(x,y, 'wo', markersize = 10)
plt.axis('off')

plt.show()