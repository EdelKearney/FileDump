# -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file.
"""

import numpy
import scipy.linalg

A = numpy.matrix("1,1j;21,3")

print(A);print(A*A);print(A**2)

print(numpy.asarray(A));print(numpy.asarray(A)*numpy.asarray(A)); print(numpy.asarray(A)**2)