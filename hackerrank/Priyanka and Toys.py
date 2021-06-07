def toys(w):

    w = sorted(w)
    ans = 1
    i  = 0
    val = w[0]
    while i <len(w)-1:
        if val +4 >= w[i+1]:
            i+=1
        else:
            val = w[i+1]
            ans+=1
    return ans

print(toys([1,2,3,21,7,12,14,21]))

