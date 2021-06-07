# -*- coding: utf-8 -*-
"""
Created on Sun Aug 30 13:15:46 2020

@author: T.Biegel_Lokal
"""

n = int(input())

w=[]

for i in range(n):
    w.append(input().replace(' ',''))
    
p = 0
k = 0
for i in range(len(w)):
    for j in range(3):
       
        if w[i][j] =='1':
            p=p+1
        
            if p>= 2:
                k=k+1 
                p=0
                break
    p=0
print (k)