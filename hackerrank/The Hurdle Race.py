def hurdleRace(k,height):
    ans = 0
    height = sorted(height)
    max_height = height[len(height)-1]
    if k < max_height:
        ans = max_height -k
    else:
        ans = 0
    return ans

