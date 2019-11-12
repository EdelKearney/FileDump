# -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file.
"""

import numpy
import scipy.linalg

mu = 1/numpy.sqrt(2)
A = numpy.matrix([[mu, 0, mu], [0,1,0], [mu, 0, -mu]])
B = scipy.linalg.kron(A,A)

print(B[:,0:-1:2])