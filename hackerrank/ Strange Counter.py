def strangeCounter(t):
    k = 0
    while True:
        if (3*(2**k)-2 <= t) and (t < 3*(2**(k+1))-2):
            break
        else:
            k+=1
    return 3*2**k - (t-3*(2**k)+2)
print(strangeCounter(4))
