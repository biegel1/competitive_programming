def fairRations(B):
    ans = 0
    for i in range(len(B)):
        if B[i]%2 == 0:
            pass
        else:
            if i+1 <=len(B)-1:
                B[i] +=1
                B[i+1]+=1
                ans+=2
            else:
                ans = 'NO'
    return ans
