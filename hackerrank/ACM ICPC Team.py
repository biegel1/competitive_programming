def acmTeam(topic):
    ans, max_value = 0,0
    for i in range(len(topic)):
        for j in range(i+1, len(topic)):
            x = int(topic[i],2)|int(topic[j],2)
            x = bin(x).count('1')
            if x>max_value:
                max_value =x
                ans = 1
            elif x == max_value:
                ans+=1
    return (max_value,ans)
print(acmTeam(['10101','11110','00010']))

