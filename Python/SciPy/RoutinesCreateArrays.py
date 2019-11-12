# -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file.
"""

import numpy
import mymodule

A = numpy.array([[1,2], [2,1]])
Z = numpy.zeros((5,5), dtype = int)
U = numpy.ones((2,2), dtype = int)
I = numpy.identity(3, dtype = int)

print(A, "\n\n")
print(Z, "\n\n")
print(U, "\n\n")
print(I, "\n\n")

D = numpy.eye(4, k = 1) + numpy.eye(4, k = -1)
print(D, "\n\n")

C = 3.0*(numpy.eye(5, k = 4) + numpy.eye(5, k = -4))
C[0:2, 0:2] = 5*U; C[2:5, 2:5] = 6*I
print(C, "\n\n")

B = numpy.fromfunction((lambda i,j: i*j), (4,4), dtype = int)
print(B, "\n\n")
print(B==0, "\n\n")

B = B + numpy.fromfunction((lambda i,j:i*i+j*j), (4,4))*(B==0)
print(B, "\n\n")

print(B%2!=0, "\n\n")

print(numpy.where(B%2!=0), "\n\n")

numpy.putmask(B, B%2!=0, B**2+1)
print(B, "\n\n")

L1 = numpy.arange(-1,1,0.3)
print(L1, "\n\n")

L2 = numpy.linspace(-1,1,4)
print(L2, "\n\n")

L3 = numpy.logspace(-1,1,4)
print(L3, "\n\n")

print(numpy.meshgrid(L2, L3), "\n\n")

print(numpy.mgrid[0:5, 0:5], "\n\n")

#print(numpy.ogrid[0.5:, 0:5], "\n\n")
checker2by2[0:3, 0:3] = checker2by2[3:6, 3:6] = B
