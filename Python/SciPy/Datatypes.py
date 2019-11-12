# -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file.
"""

import numpy

scores = numpy.float32([101,103,84])
print(scores)

a = numpy.array(['Cleese', 'Idle', 'Gilliam'], dtype='str_')
print(a.dtype)

dt = numpy.dtype([('name', numpy.str_, 16), ('grades', numpy.float64, (2,))])
print(dt)

MA141 = numpy.array([('Cleese', (7.0, 8.0)), ('Gilliam', (9.0, 10.0))], dtype = dt)
print(MA141)

