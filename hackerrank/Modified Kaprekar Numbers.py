def kaprekarNumbers(p,q):

    ans = []
    for i in range(p,q+1):
        num = i**2
        str_num = list(str(num))
        new_d = len(str_num)
        if new_d == 1:
            if num==i:
                ans.append(i)
        else:
            if new_d %2 == 0:
                d = new_d//2
                r = str_num[d:new_d]
                l = str_num[0:d]
            else:
                d = (new_d+1)//2
                r = str_num[d-1: new_d]
                l = str_num[0:d-1]
            r = int(''.join(r))
            l = int(''.join(l))
            if r+l == i:
                ans.append(i)
    if ans == []:
        print('INVALID RRANGE')
    else:
        print(*ans)
print(kaprekarNumbers(297,297))
