def beautifulTriplets(d,arr):
    ans = 0
    for i in range(len(arr)):
        c = 0
        j = i+1
        k = arr[i]
        while j<len(arr):
            if arr[j]-k ==d:
                c+=1
                k= arr[j]
            j+=1
            if c==2:
                ans+= 1
                break

    return ans
