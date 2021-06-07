def jumpingOnClouds(c,k):
    n = len(c)
    e = 100
    new = 0
    for i in range(n):
        e -=1
        new = (new+k)%n
        if c[new] ==1:
            e-=2
        elif new ==0:
            break
    return e


