def catAndMouse(x,y,z):
    d1 = abs(x-z)
    d2 = abs(y-z)
    if d1==d2:
        ans = 'Mouse C'
    elif d1>d2:
        ans = 'Cat B'
    else: 
        ans = 'Cat A'
    return ans






