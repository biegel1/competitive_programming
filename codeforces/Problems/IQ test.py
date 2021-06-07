def solve(numbers): 
    evens = []
    odds = []
    for i in range(n): 
        if int(numbers[i]) % 2 == 0: 
            evens.append(i+1)
        else:
            odds.append(i+1)

        if i > 1:
            if len(odds)>0 and len(evens) >0:
                if len(odds) >len(evens):
                    ans = evens[0]
                    break
                else:
                    ans =odds[0]
                    break   
    return ans 


n = int(input())
numbers = input().split()

print(solve(numbers))



