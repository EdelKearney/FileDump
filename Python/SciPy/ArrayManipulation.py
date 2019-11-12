# -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file.
"""

import numpy
import maxTest as mT

B = numpy.ones((3,3))
checker2by2 = numpy.zeros((6,6))
checker2by2[0:3, 0:3] = checker2by2[3:6, 3:6] = B
print(checker2by2)

print(numpy.vsplit(checker2by2, 3))

a = numpy.array([-numpy.pi, numpy.pi])
print(numpy.vstack((a, numpy.sin(a))))

    
print(numpy.vectorize(mT.max100)(a))