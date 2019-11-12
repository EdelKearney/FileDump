# -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file.
"""

import mymodule

img = mymodule.lena()
value = 0
for item in img.flat: value += item
print(value)

#array conversion
img.tofile("lena.txt", sep=" ", format = "%i")

