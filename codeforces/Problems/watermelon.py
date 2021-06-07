# -*- coding: utf-8 -*-
"""
Created on Sat Aug 29 12:57:23 2020

@author: T.Biegel_Lokal
"""

n = int(input())

if((n>2) & ((n-2)%2 == 0)):
    res = 'YES'
else:
    res= 'NO'
        
print(res)