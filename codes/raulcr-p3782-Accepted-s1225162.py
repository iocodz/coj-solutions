import sys

raw_input=lambda:sys.stdin.readline().rstrip()
input=lambda:int(raw_input())

n = int(raw_input())

while n > 0:
    a = raw_input().split(' ')
    sol = "Y"
    for i in range(0, 4):
        if int(a[i]) + 1 != int(a[i + 1]):
            sol = "N"
            break
    print (sol)
    n -= 1
