def viralAdvertising(n):
    ans = 2
    cumul = 2
    i = 1
    while i < n:
        cumul = cumul*3//2
        ans += cumul
        i+=1
    return ans
print(viralAdvertising(5))
