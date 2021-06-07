def circularArrayRotation(a,k,queries):
    ans = [0] * (len(a))
    sol = []
    for i in range(len(a)):
        if (i+1+k)%(len(a))==0:
            j = i +1 +(k%(len(a)))
            ans[j-1] = a[i]
        else:
            j = (i+1+k)%(len(a))
            ans[j-1] = a[i]
    for q in queries:
        sol.append(ans[q])

    return sol

print(circularArrayRotation([3,4,5],2,[1,2]))

