# -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file.
"""

import numpy
import matplotlib.pyplot as plt

x = numpy.linspace(0, 2*numpy.pi, 32)
fig = plt.figure()
plt.plot(x, numpy.sin(x))
plt.show()
fig.savefig('sine.png')