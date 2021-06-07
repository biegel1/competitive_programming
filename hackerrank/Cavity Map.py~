def cavityMap(grid):

    ans = [list(grid[row])for row in range(len(grid))]
    
    for row in range(1,len(grid)-1):

        for column in range(1,len(grid)-1):
            if int(grid[row][column]) > int(grid[row-1][column]) and \
            int(grid[row][column]) > int(grid[row+1][column]) and \
            int(grid[row][column]) > int(grid[row][column-1]) and \
            int(grid[row][column]) > int(grid[row][column+1]):
                ans[row][column] = 'X'

    for i in range(len(ans)):
        ans[i] = ''.join(ans[i])
    return ans
print(cavityMap(['1111','2922','3333','3322']))
