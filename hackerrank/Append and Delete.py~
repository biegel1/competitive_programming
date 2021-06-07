def appendAndDelete(s,t,k):
    n = len(s)
    m = len(t)
    i = 0
    if n <=m:
        num = n
    else: 
        num = m
    while i < num:
        if s[i] == t[i]:
            i+=1
        else:
            break
    ans = len(s[i:len(s)])+ len(t[i:len(t)])
    if k -ans <0:
        sol = 'No'
    elif k -ans ==0:
        sol = 'Yes'
    else:
        if (k-ans) % 2 == 0:
            sol = 'Yes'
        else:
            if k>=2*m+1:
                sol = 'Yes'
            else:
                sol = 'No'
    return sol





