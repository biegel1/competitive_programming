def workbook(n,k,arr):
    ans = 0
    problems = []
    ppp = []
    for i in range(n):
        x = 1
        j = 1
        while j < arr[i]+1:
            if j <= x*k:
                problems.append(j)
                if j == arr[i]:
                    ppp.append(problems)
                    problems = []
                    break
            else:
                x+= 1
                j-=1
                ppp.append(problems)
                problems = []
            j+=1
    num_problems = sum(arr)
    num_pages = num_problems//k + num_problems %k
    for i in range(1,len(ppp)+1):
        if i in ppp[i-1]:
            ans+=1



    return ans
print(workbook(5,3,[4,2,6,1,10]))


