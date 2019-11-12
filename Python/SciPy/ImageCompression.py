# -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file.
"""

import numpy
import scipy.misc
from scipy.linalg import svd
import matplotlib.pyplot as plt
import mymodule

import random

img = mymodule.lena()
U,s, Vh = svd(img) #Singular value decomposition
A = numpy.dot(U[:,0:32], #use only singular values
        numpy.dot(numpy.diag(s[0:32]),
                  Vh[0:32,:]))

plt.subplot(121, aspect = 'equal'); plt.imshow(img); plt.gray()
plt.subplot(122, aspect = 'equal'); plt.imshow(A)
plt.show()


list1 = [1,2,3]
list2 = [4,5,6]

listall = zip(list1, list2)

print(listall)