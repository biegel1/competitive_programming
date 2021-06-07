def queensAttack(n,k,r_q,c_q,obstacles):
    total = 0
    ob = {}
    for i in obstacles:
        ob[tuple(i)] = 0
    n_exhausted = False
    ne_exhausted = False
    e_exhausted = False
    se_exhausted = False
    s_exhausted = False
    sw_exhausted = False
    w_exhausted = False
    nw_exhausted = False
    for i in range(1,n):
        if n_exhausted == False:
            if (r_q+i,c_q) in ob:
                n_exhausted = True
            else:
                if r_q+i <= n:
                    total +=1
        if ne_exhausted == False:
            if (r_q+i, c_q+i) in ob:
                ne_exhausted = True
            else:
                if r_q+i <= n and c_q+i <=n:
                    total +=1
        if e_exhausted == False:
            if (r_q, c_q+i) in ob:
                e_exhausted = True
            else:
                if c_q+i <=n:
                    total +=1
        if se_exhausted == False:
            if (r_q-i,c_q+i) in ob:
                se_exhausted = True
            else:
                if r_q-i >=1 and c_q+i <=n:
                    total +=1
        if s_exhausted == False:
            if (r_q-i,c_q) in ob:
                s_exhausted = True
            else:
                if r_q-i >= 1:
                    total +=1
        if sw_exhausted == False:
            if (r_q-i,c_q-i) in ob:
                sw_exhausted = True
            else:
                if r_q-i >= 1 and c_q-i >=1:
                    total += 1
        if w_exhausted == False:
            if (r_q,c_q-i) in ob:
                w_exhausted = True
            else:
                if c_q-i >=1:
                    total +=1
        if nw_exhausted == False:
            if (r_q+i,c_q-i) in ob:
                nw_exhausted = True
            else:
                if r_q+i <=n and c_q-i >=1:
                    total +=1
    return total
print(queensAttack(4,1,4,4,[[1,2]]))
