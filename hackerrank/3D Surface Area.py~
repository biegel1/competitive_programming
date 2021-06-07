def surfaceArea(A):

    ans = 0
    top = len(A)*len(A[0])
    bottom = top
    left = sum(A[0])
    right = sum(A[len(A)-1])
    front = 0
    back = 0
    for i in range(len(A)):
        front+= A[i][0]
        back +=A[i][len(A[0])-1]
    ans = top+bottom+left+right+front+back
    H = len(A)
    W = len(A[0])
    for i in range(H):
        for j in range(W-1):
            ans+= abs(A[i][j+1]-A[i][j])
    for j in range(W):
        for i in range(H-1):
            ans += abs(A[i+1][j] - A[i][j])
    return ans

print(surfaceArea([[1,3,4],[2,2,3],[1,2,4]]))
    
