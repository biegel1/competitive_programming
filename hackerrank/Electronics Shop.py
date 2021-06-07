def getMoneySpent(keyboards,drives,b):
    ans = -1
    prices = []
    for i in range(len(keyboards)):
        for j in range(len(drives)):
            price = keyboards[i] + drives[j]
            if price <= b:
                prices.append(keyboards[i]+drives[j])
    if len(prices)>0:
        ans = max(prices)
    return ans

print(getMoneySpent([40,50,60],[5,8,12],60))





