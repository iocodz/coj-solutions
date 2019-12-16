while True:
    d = raw_input().split(' ')
    if int(d[0]) == 0:
        break
    a, b, c = d
    a = int(a)
    b = int(b)
    c = int(c)
    if a > b:
        a, b = b, a
    if a > c:
        a, c = c, a
    if b > c:
        b, c = c, b
    if a ** 2 + b ** 2 == c ** 2:
        print "right"
    else:
        print "wrong"