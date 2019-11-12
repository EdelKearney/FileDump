# -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file.
"""

import scipy.misc
import numpy
from mymodule import lena


img = lena().astype('float32')

scores = numpy.array([101, 103, 84], dtype = 'float32')
print(scores)
print(img)

