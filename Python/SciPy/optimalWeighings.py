# -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file.
"""

import scipy.linalg

A = scipy.linalg.hadamard(8)

zero_sum_rows = (numpy.sum(A,0) == 0)
B = A[zero_sum_rows, :]
print(B[0:3,:])