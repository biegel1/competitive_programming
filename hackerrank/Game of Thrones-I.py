def gameOfThrones(s):
    count = {}
    for i in s:
        if i in count:
            count[i]+=1
        else:
            count[i] = 1

    odd = 0
    for i in count:
        if count[i]%2!=0:
            odd+= 1

    if odd >1:
        return 'NO'
    else:
        return 'YES'

