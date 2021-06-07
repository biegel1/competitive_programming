from math import *

def encryption(s):
    def init_grid(rows, columns):
        return [['']*columns for i in range(rows)]
    s = list(s.replace(' ',''))
    rows = floor(sqrt(len(s)))
    columns = ceil(sqrt(len(s)))
    if rows*columns >= len(s):
        for k in range(rows*columns - len(s)):
            s.append('')
        grid = init_grid(rows, columns)
        j = 0
        for i in range(rows):
            grid[i] = s[columns*j : columns*(j+1)]
            j += 1
        if i+1< len(s)//columns:
            grid[i+1] = s[columns*j:columns*j + len(s)%columns]
        if len(grid[i]) < columns-1:
            n = len(grid[i])
            for k in range(columns - n):
                grid[i].append('')
        gridn = init_grid(columns, rows)
        for i in range(rows):
            for j in range(columns):
                gridn[j][i] =grid[i][j] 
    else:
        x = 0
        y = 1
        while rows*columns < len(s):
            columns+= x
            rows += y
            a = x
            x = y
            y = a
        for k in range(rows*columns - len(s)):
            s.append('')

        grid = init_grid(rows, columns)
        j = 0
        
        for i in range(rows):
            grid[i] = s[columns*j : columns*(j+1)]
            j += 1
        if i+1< len(s)//columns:
            grid[i+1] = s[columns*j:columns*j + len(s)%columns]
        if len(grid[i]) < columns-1:
            n = len(grid[i])
            for k in range(columns - n):
                grid[i].append('')
        gridn = init_grid(columns, rows)
        for i in range(rows):
            for j in range(columns):
                gridn[j][i] =grid[i][j] 

    ans = []
    for row in range(len(gridn)):
        ans.append(''.join(gridn[row]+['']))
    return ' '.join(ans)



print(encryption('chillout'))
