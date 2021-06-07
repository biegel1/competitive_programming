def absolutePermutation(n,k):
    ans = []
    arr = list(range(1,n+1))
    if k == 0:
        return arr
    elif k == 1:
        for i in arr:
            if i%2 ==0:
                ans.append(i-k)
            else:
                ans.append(i+k)
    else:
        x = 1
        count={} 
        for i in arr:
            count[i]= 0
        for i in arr:
            if i %k == 0:
                if x%2 == 0:
                    ans.append(i-k)
                else:
                    ans.append(i+k)
                x+=1
            else:
                if x%2 ==0:
                    ans.append(i-k)
                else:
                    ans.append(i+k)
            if ans[-1] >n:
                return [-1]
            else:
                count[ans[-1]] +=1
                if count[ans[-1]]>1:
                    return [-1]
    return ans

print(absolutePermutation(3,2))

