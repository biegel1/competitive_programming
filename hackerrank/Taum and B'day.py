def taumBday(b,w,bc,wc,z):
    wc1 = wc
    if wc > bc+z:
        wc = bc+z

    if bc > wc1+z:
        bc = wc1+z
    return b*bc+w*wc


