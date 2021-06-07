def saveThePrisoner(n,m,s):
    if (s+m-1)%n ==0:
        return s+(m-1)%n
    else:
        return (s+m-1)%n
print((4+33)%12)
