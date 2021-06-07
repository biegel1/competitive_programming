def equalizeArray(arr):
    n = len(arr)
    ans = [0] * (101)
    sol= 0
    for i in range(n):
        ans[arr[i]] += 1
    return n - max(ans)
