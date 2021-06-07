# -*- coding: utf-8 -*-
"""
Created on Sun Sep  6 09:04:38 2020

@author: T.Biegel_Lokal
"""

m, n = input().split()
m = int(m)
n = int(n)
res = 0
if(m%2==0 & n%2==0):
    res = m/2*n
if(m%2!=0 & n%2== 0):
    res = n/2*m
if(m%2 == 0 & n%2!= 0):
    res = m/2 * n
if(m%2!=0 & n%2!=0):
    res= (m*n - 1)/2
    
print(int(res))