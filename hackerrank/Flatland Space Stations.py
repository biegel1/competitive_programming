def flatlandSpaceStations(n,c):
    c = sorted(c)
    max_dist = 0    
    if c[0] > 0:
        max_dist = c[0]-0
    if c[len(c)-1] < n-1:
        dist = n-1-c[len(c)-1]
        if dist>max_dist:
            max_dist =dist
    for i in range(len(c)-1):
        furthest_city = (c[i] + c[i+1])//2
        dist = furthest_city-c[i]
        if dist >max_dist:
            max_dist = dist

    return max_dist
print(flatlandSpaceStations(90,[4,76,16,71,56,7,77,31,2,66,12,32,57,11,19,14,42]))
