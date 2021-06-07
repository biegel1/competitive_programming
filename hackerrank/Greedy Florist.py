def getMinimumCost(k,c):
    costs = 0
    c= sorted(c) #O(n log n)
    if k >= len(c):
        costs = sum(c)  #O(n)
        return costs
    else:

        l = 1
        d = 0
        for i in range(len(c)): #O(n)
            if d == k:
                d = 1
                l +=1
            else:
                d+=1
            costs+= l*c[len(c)-1-i]
    return costs

#complexity: O(n log n + n) = O(n(log (n+1)) = O(n log n)
