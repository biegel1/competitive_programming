def nonDivisibleSubset(k,s):
    ans = 0
    idxs= []
    for i in range(k//2):
        idxs.append((i+1,k-i-1))
    rems = []
    for j in s:
        rems.append(j%k)
    if 0 in rems:
        ans+=1
    count = {}
    for idx in idxs:
        count[idx[0]] = 0
        count[idx[1]] = 0
    for idx in idxs:
        for rem in rems:
            if idx[0] != idx[1]:
                if idx[0] == rem:
                    count[idx[0]]+=1
                if idx[1] == rem:
                    count[idx[1]] +=1
            else:
                ans+=1
                break
        ans +=max(count[idx[0]],count[idx[1]])
    return ans
print(nonDivisibleSubset(6,[1,7,2,4,3,33,36]))
