def chocolateFeast(n,c,m):
    
    wrappers = n//c
    bars = wrappers
    while wrappers >= m:
        wrappers -=m
        bars+=1
        wrappers +=1
    return bars


