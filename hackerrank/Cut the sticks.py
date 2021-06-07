def cutTheSticks(arr):

    arr = sorted(arr)
    ans = []
    while len(arr) >0:
        k = 0
        ans.append(len(arr))
        min_x = arr[0]
        for i in range(len(arr)):
            arr_i = arr[i] - min_x
            if arr_i == 0:
                k+=1
        arr = arr[k:len(arr)]
    return ans
