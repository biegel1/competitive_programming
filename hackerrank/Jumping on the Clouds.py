def search(k, subset):
    if k == 3:
        pass
    else:
        search(k+1,subset)
        subset.append(k)
        search(k+1,subset)
        subset.pop()
    return subset

print(search(0,[0]))
