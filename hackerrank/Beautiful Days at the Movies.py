def beautifulDays(i,j,k):
    ans = 0
    test = []
    for l in range(i,j+1):
        z = l
        while l%10 == 0:
            l = (l//10)
        reverse = list(str(l))
        reverse = int("".join(reverse[::-1]))
        if abs(z-reverse)%k == 0:
            ans+=1
    return ans
print(beautifulDays(1,123456,13))

