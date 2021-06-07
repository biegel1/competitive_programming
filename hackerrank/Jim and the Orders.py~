def jimOrders(orders):

    serveTimes = []
    c = 1
    for order_number, preparation_time in orders: #O(n) where n = len(orders)
        serveTimes.append((order_number+preparation_time,c)) #O(1) for each step 
        c+=1

    serveTimes.sort(key = lambda x: x[0])


    ans = []
    
    for i in range(len(serveTimes)):
        ans.append(serveTimes[i][1])
    return ans
    



