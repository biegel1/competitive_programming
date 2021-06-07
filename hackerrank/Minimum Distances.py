def minimumDistances(a):
    ans = -1
    n = len(a)
    min_dist = n
    for i in range(n):
        for j in range(i+1,n):
            if a[i] == a[j]:
                if j-i <min_dist:
                    min_dist = j-i
    if min_dist != n:
        ans = min_dist
    return ans 
