def serviceLane(width,cases):

    min_width = []
    for i in range(len(cases)):
        min_width.append( min(width[cases[i][0] : cases[i][1]]+1))
    return min_width
