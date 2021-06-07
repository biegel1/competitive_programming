def maxMin(k,arr):

    arr = sorted(arr)
    ans = arr[-1]
    for i in range(len(arr)-k+1):
        res = arr[i+k-1]-arr[i]
        if res < ans:
            ans = res
    return ans
