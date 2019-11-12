# -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file.
"""

import numpy

A = numpy.array([5,1,1,2,1,1,2,2,10,3,3,4,5])

print(numpy.unique(A))

print(numpy.bincount(A))


A = numpy.fromfunction((lambda i,j: (i+1)*(-1)**(i*j)), (4,4))
print(A)

B = numpy.log2(A)
print(B)

print(numpy.sum(B), numpy.nansum(B))