# -*- coding: utf-8 -*- """
Created on Sat Aug 29 20:07:41 2020

@author: T.Biegel_Lokal
"""

n = int(input())

w = []

for i in range(n):
    w.append(input())

for i in range(len(w)):
    if len(w[i]) > 10:
        w[i] = w[i][0] + str(len(w[i])-2)  + w[i][len(w[i])-1]
    
    print (w[i] + '\n')
    
