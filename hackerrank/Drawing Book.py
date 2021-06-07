def pageCount(n,p):
    ans = 0
    max_page_turns = n//2
    r = n-p
    if r//2 > p//2:
        ans = p//2
    else:
        ans = r//2

    return ans
print(pageCount(5,4))
