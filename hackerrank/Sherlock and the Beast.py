def decentNumber(n):
    if n%3 == 0:
        ans = '5'
        ans = ans*(n//3)*3
        print(ans)
    else:
        k = n
        found = False
        while k >= 3: 
            k-=5
            if k%3 == 0:
                ans = '5'
                ans = ans*(k//3)*3
                bns = '3'
                bns = bns *((n-k)//5)*5
                print(ans+bns)
                found = True
                break
        if found == False:
            print(-1)

print(decentNumber(9))
