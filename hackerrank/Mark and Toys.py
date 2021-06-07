def maximumToys(prices,k):

    prices = sorted(prices)
    i = 0
    c = 0
    for i in range(len(prices)):
        if k-prices[i] >0:
            k-=prices[i]
            c+=1
            i+=1
        else:
            break
    return c

