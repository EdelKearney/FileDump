# -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file.
"""

import numpy
import scipy
#from scipy import stats

scores = numpy.array([114,100,104,89,102,91,114,114,103,105,108,130,120,132,111,128,118,119,86,72,111,103,74,112,107,103,98,96,112,112,93]);

xmean = scipy.mean(scores)
sigma = scipy.std(scores)
n = scipy.size(scores)



print(xmean)
print(sigma)
print(n)

print(xmean - 2.576*sigma / scipy.sqrt(n))
print(xmean + 2.576*sigma / scipy.sqrt(n))

result = scipy.stats.bayes_mvs(scores)

print(result[0])