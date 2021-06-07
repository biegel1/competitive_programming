def bomberMan(n, grid):

    def prepare_grid(grid):
        #prepare grid to access elements since strings are immutable
        for i in range(len(grid)):
            grid[i] = list(grid[i])
        return grid
    
    def setBombs(grid):
        for i in range(len(grid)):
            grid[i] = 'O'*len(grid[0])
        return grid
    
    def update_grid(grid, bombs_pos):
        for bomb in bombs_pos:
            grid[bomb[0]][bomb[1]] = '.'
        return grid




    def fill_bombsPos(grid):
        #use set to exclude double counts of values
        bombs = []
        for i in range(len(grid)):
            for j in range(len(grid[0])):
                if grid[i][j] =='O':
                    bombs.append((i,j))
                    if (i>0 and i < len(grid)-1 and (j >0 and j< len(grid[0])-1)):
                        bombs.append((i+1,j))
                        bombs.append((i-1,j))
                        bombs.append((i, j+1))
                        bombs.append((i,j-1))
                    elif i == 0 and j == 0:
                        bombs.append((i+1,j))
                        bombs.append((i, j+1))
                    elif i == len(grid)-1 and j == 0:
                        bombs.append((i-1, j))
                        bombs.append((i,j+1))
                    elif i == 0 and j == len(grid[0])-1:
                        bombs.append((i+1,j))
                        bombs.append((i, j-1))
                    elif i == len(grid)-1 and j == len(grid[0])-1:
                        bombs.append((i-1, j))
                        bombs.append((i, j-1))
                    elif i == 0 and (j >0 and j <len(grid[0])-1):
                        bombs.append((i+1, j))
                        bombs.append((i,j+1))
                        bombs.append((i, j-1))
                    elif i == len(grid)-1 and(j>0 and j<len(grid[0])-1):
                        bombs.append((i-1, j))
                        bombs.append((i, j-1))
                        bombs.append((i, j+1))
                    elif j == 0 and (i >0 and i <len(grid)-1):
                        bombs.append((i+1,j))
                        bombs.append((i-1,j))
                        bombs.append((i,j+1))
                    elif j == len(grid[0])-1 and (i >0 and i <len(grid)-1):
                        bombs.append((i+1,j))
                        bombs.append((i-1,j))
                        bombs.append((i,j-1))



        bombs = list(set(bombs))
        return bombs

    if n == 1:
        return grid
    elif n ==2: 
        grid = setBombs(grid)
        return grid
    else:
        helper_grid = grid[:]
        for i in range(2,n+1):
            if i %2 == 0:
                grid = prepare_grid(setBombs(grid))
            else:
                bombs_pos = fill_bombsPos(helper_grid)
                grid = update_grid(grid,bombs_pos)
                helper_grid = grid[:]
    for  i in range(len(grid)):
        grid[i] = ''.join(grid[i])
    return grid

            


print(bomberMan(5,['.......']))
