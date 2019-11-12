# -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file.
"""

import numpy

vectorA = numpy.array([1,2,3,4,5,6,7])

print(vectorA)

vectorB = vectorA[::-1].copy()

print(vectorB)

vectorB[0] = 123
print(vectorB)

print(vectorA)

vectorB = vectorA[::-1].copy()
print(vectorB)