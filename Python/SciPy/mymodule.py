# -*- coding: utf-8 -*-
"""
Created on Fri Sep  6 19:26:18 2019

@author: edelk
"""
import scipy

def lena():
    import pickle, os
    fname = os.path.join(os.path.dirname(__file__), 'lena.dat')
    f = open(fname, 'rb')
    lena = scipy.array(pickle.load(f))
    f.close()
    return lena