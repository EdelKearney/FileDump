# -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file.
"""

import numpy
import scipy.sparse

A = numpy.matrix("1,2,3;4,5,6")
print(A)

A = numpy.matrix([[8,9,10],[11,12,13]])
print(A)

A = numpy.matrix([[0,10,0,0,0],[0,0,20,0,0],[0,0,0,30,0],[0,0,0,0,40],[0,0,0,0,0]])
print(A)

rows = numpy.array([0,1,2,3])
cols = numpy.array([1,2,3,4])
vals = numpy.array([10,20,30,40])

A = scipy.sparse.coo_matrix((vals, (rows,cols)))
print(A); print(A.todense())

print(scipy.sparse.isspmatrix_coo(A))

B = numpy.mat(numpy.ones((3,3)))
W = numpy.mat(numpy.zeros((3,3)))
print(numpy.bmat('B,W;W,B'))

a = numpy.array([[1,2], [3,4]])
print(a*a)

A = numpy.mat(a)
print(A*A)

b = numpy.array([[1,2,3],[3,4,5]])
print(numpy.dot(a,b))

print(numpy.multiply(A,A))

a = numpy.arange(5); A = numpy.mat(a)
print(a.shape, A.shape, a.transpose().shape, A.transpose().shape)

