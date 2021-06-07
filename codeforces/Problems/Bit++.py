n = int(input().strip())
arr = []
for i in range(n):
    arr.append(input().rstrip().split())

x=0
for i in range(len(arr)):
    for j in arr[i]:
        if '+' in list(j):
            x+=1
            break
        elif '-' in list(j):
            
            x-=1
            break

print(x)

