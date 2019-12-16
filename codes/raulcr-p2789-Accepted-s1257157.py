a = raw_input().split('+')
a.sort()
sol = a[0]
for i in range(1, len(a)):
    sol += '+' + a[i]
print (sol)