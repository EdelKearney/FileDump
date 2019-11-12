# -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file.
"""

import numpy

A = numpy.array([[1,2,3,4,5,6,7,8], [2,4,6,8,10,12,14,16]])

print(A[0:2, 0:8:2])
print(A[0:2, 8:0:-2])
print(A[[0,0,1,1], [0,3,2,5]])
print(A [numpy.ix_([0,1], [0,3])])
