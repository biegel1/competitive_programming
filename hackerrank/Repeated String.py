def repeatedString(s,n):

    s = list(s)
    m = len(s)
    a = 0
    for i in s:
        if i == 'a':
            a += 1
    num_a = a
    if n%m ==0:
        num_a *= n//m
    else:
        a1 = n//m
        a2 = 0
        print(n%m)
        for i in s[0:n%m]:
            if i=='a':
                a2 +=1
        
        num_a = num_a * a1+a2
    return num_a
