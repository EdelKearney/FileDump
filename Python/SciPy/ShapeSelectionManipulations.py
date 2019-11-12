# -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file.
"""

import numpy
A = numpy.array([11, 13, 15, 17, 19, 18, 16, 14, 12, 10])

print(A.argsort(kind='mergesort'))
A.sort()
print(A)