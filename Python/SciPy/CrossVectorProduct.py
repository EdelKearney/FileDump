# -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file.
"""

import numpy

vectorA = numpy.array([5, 6, 7])
vectorB = numpy.array([7, 6, 5])

crossProduct = numpy.cross(vectorA, vectorB)
print(crossProduct)

crossProduct = numpy.cross(vectorB, vectorA)
print(crossProduct)