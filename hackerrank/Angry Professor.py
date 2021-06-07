def angryProfessor(k,a):
    on_time= 0
    for i in range(len(a)):
        if a[i]<= 0:
            on_time+= 1
    if on_time>= k:
        ans = 'NO'
    else:
        ans = 'YES'
    return ans

