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

vectorC = vectorA + vectorB
print(vectorC)

vectorD = vectorB - vectorA
print(vectorD)

dotProduct1 = numpy.dot(vectorA, vectorB)
print(dotProduct1)

dotProduct2 = (vectorA*vectorB).sum()
print(dotProduct2)

