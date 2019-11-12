# -*- coding: utf-8 -*-
"""
Created on Tue Sep 17 10:44:06 2019

@author: edelk
"""
import random

lottery_numbers = range(47)
winning_numbers = random.sample(lottery_numbers, 6)
bonus_number = random.sample(lottery_numbers, 1)

print(winning_numbers)
print(bonus_number)
