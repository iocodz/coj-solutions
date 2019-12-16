def triangular(n):
    x = long(n ** 0.5)
    if x * x == n:
        return True
    return False

while 1:
    n = input()
    if n == 0:
        break
    if triangular(8 * n + 1):
        print 'YES'
    else:
        print 'NO'