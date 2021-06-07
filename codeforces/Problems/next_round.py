# -*- coding: utf-8 -*-
"""
Created on Tue Sep  1 17:54:45 2020

@author: T.Biegel_Lokal
"""

n, k = input().split()

k = int(k)
n = int(n)
res = 0
pos= list(input().split())

pos = [int(i) for i in pos]
pos.append(-1)

if sum(pos)== 0:
    res = 0
    
else:
    res = k
    if(pos[k-1]==0):
        while(pos[k-1]==0):
            res -=1
            k-=1
    else:
        while (pos[k-1] == pos[k]):
            res += 1
            k +=1
print(res)