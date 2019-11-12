# -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file.
"""

import numpy
import scipy.linalg

a = numpy.arange(0,2*numpy.pi,1.6)
A = scipy.linalg.toeplitz(a)
print(A)

print(numpy.exp(A))

print(scipy.linalg.expm(A))