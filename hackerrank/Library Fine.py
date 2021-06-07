def libraryFine(d1,m1,y1,d2,m2,y2):


    if y1 <= y2:
        if y1 == y2:
            if m1 <= m2:
                if m1 == m2:
                    if d1 <= d2:
                        fine = 0
                    else:
                        fine = (d1-d2) * 15
                else:
                    fine = 0
            else:
                fine = (m1-m2)*500
        else:
            fine = 0
    else:
        fine = 10000
    return fine

