def pickingNumbers(a):
    a = sorted(a)
    arr = []
    c = 1
    len_sub_arr = []
    arr.append(a[0])
    for i in range(len(a)-1):
        if abs(arr[0]-a[i+1])<=1:
            c+=1
            arr.append(a[i+1])
        else: 
            len_sub_arr.append(c)
            c = 1
            arr = []
            arr.append(a[i+1])
    if len_sub_arr == []:
        len_sub_arr.append(c)
    return max(len_sub_arr)

print(pickingNumbers([1,3,3,4,5,6]))



