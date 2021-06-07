def permutationEquation(p):
    ans = []
    d = {}
    for i in range(len(p)):
        d[p[i]] = i+1
    for i in range(len(p)):
        ans.append(d[d[i+1]])
    return ans

