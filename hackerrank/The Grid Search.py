def gridSearch(G,P):
    ans = 0
    R = len(G)
    r = len(P)
    C = len(G[0])
    c = len(P[0])

    for i in range(R-r+1):
        for j in range(C-c+1):
            pattern = 0
            if P[0] == G[i][j:j+c]:
                pattern +=1
                for k in range(1,r):
                    print(P[k],G[i+k][j:j+c])
                    if P[k] == G[i+k][j:j+c]:
                        pattern += 1

            if pattern == r:
                ans = 'YES'
                break
            else:
                ans = 'NO'
        if pattern == r:
            ans = 'YES'
            break
        else:
            ans = 'NO'

    return ans
print(gridSearch(['123','456','789','125'],['23','45','22','12']))
