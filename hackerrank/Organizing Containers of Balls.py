def organizingContainers(container):

    balls_per_type = []
    balls_per_box = []
    for i in range(len(container)):
        balls_per_box.append(sum(container[i]))
    balls = 0
    for j in range(len(container)):
        for i in range(len(container)):
            balls += container[i][j]
        balls_per_type.append(balls)
        balls = 0
    print(balls_per_box)
    print(balls_per_type)
    if sorted(balls_per_box) == sorted(balls_per_type):
        return 'Possible'
    else:
        return 'Impossible'
print(organizingContainers([[0,2,1],[1,1,1],[2,0,0]]))
