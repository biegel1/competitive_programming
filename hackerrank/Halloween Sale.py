def howManyGames(p,d,m,s):
    cost = p
    price = p
    num = 0
    while cost <= s:

        if price-d> m:
            cost +=price-d
            num +=1
            price -= d
        else:
            cost+= m
            num+=1
    return num
