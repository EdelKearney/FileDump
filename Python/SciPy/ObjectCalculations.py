# -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file.
"""

import numpy
import mymodule

A = numpy.array([[1,1,1], [2,2,2], [3,3,3]])
print(A.mean())
print(A.mean(axis=0))
print(A.mean(axis=1))

img = mymodule.lena()
print(img.min(), img.max(), img.ptp())

A = img.clip(img.min(), img.min() + 100)
print(A.min(), A.max(), A.ptp())