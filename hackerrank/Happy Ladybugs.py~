def happyLadybugs(b):
    correct_order = True
    ans = 'YES'
    c = 0
    if '_' in b:
        count = {}
        for i in range(len(b)):
            if b[i] in count:
                count[b[i]] +=1
            else:
                count[b[i]] = 1
        for i in count:
            if count[i]<2 and i != '_':
                return 'NO'
        if len(count) == 1:
            return 'YES'
        return 'YES'

    else:
        if len(b) == 1:
            return 'NO'
        for i in range(len(b)-1):
            if b[i] == b[i+1]:
                c+=1
            else:
                if c>=1 and i+1 < len(b)-1:
                    c=0
                else:
                    correct_order = False
                    return 'NO'
        return 'YES'

  

print(happyLadybugs('G'))
