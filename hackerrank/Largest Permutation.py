def largestPermutation(k,arr):
    sorted_arr = sorted(arr[:], reverse = True)
    b_arr = arr[:]
    indices = {}
    for i in range(len(arr)):
        indices[arr[i]] = i
    i = 0
    while k>0 and i < len(arr):
       
        n_elem = sorted_arr[i]
        o_elem = arr[i]
        if n_elem == o_elem:
            i+=1
        else:
            idx = indices[n_elem]
            arr[i] = n_elem
            indices[n_elem] = i
            arr[idx] = o_elem
            indices[o_elem] = idx
            i+=1
            k-=1
    return arr
print(largestPermutation(16,[2000,87, 25, 92, 181, 147, 88,6,201,5,55,12,66,1]))
