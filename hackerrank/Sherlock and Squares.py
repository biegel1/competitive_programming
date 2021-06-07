import math
def squares(a,b):

    def gen(a,b):
        for i in range(1,int(10e9)):
            yield i**2
    square = gen(a,b)
    i = 0
    ans = 0
    while i <= math.sqrt(b)+1:
        i+=1
        j = next(square)
        if j in range(a,b+1):
            ans+=1
    return ans
print(squares(2,2))

