n = int(input())
x = []
x_i = []
y_i = []
z_i = []
for i in range(n):
    x.append(input().rstrip().split())

for i in range(len(x)): 
    x_i.append(int(x[i][0]))
    y_i.append(int(x[i][1]))
    z_i.append(int(x[i][2]))
sum_x_i = sum(x_i)
sum_y_i = sum(y_i)
sum_z_i = sum(z_i)
if sum_z_i == 0 and sum_x_i ==0 and sum_z_i == 0:
    print('YES')
else:
    print('NO')
