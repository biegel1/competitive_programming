def findDigits(n):
    digits = list(str(n))
    ans = 0 
    for i in digits:
        if int(i) == 0:
            pass
        else:
            if n%int(i) ==0:
                ans +=1
    return ans
