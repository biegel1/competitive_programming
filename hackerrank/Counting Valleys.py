def countingValleys(steps,path):
    altitude = 0
    ans = 0
    for i in range(steps):
        if path[i] == 'U':
            altitude +=1
        else:
            altitude -=1
        if altitude == -1 and path[i] == 'D':
            ans +=1
    return ans

print(countingValleys(8,['U','D','D','D','U','D','U','U']))
