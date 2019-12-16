a, b = raw_input().split(' ')

c = ""
d = ""

for i in a:
        if i == '6':
                c = c + '5'
        else:
                c = c + i


for i in b:
        if i == '6':
                d = d + '5'
        else:
                d = d + i

sol1 = str(int(c) + int(d))


c = ""
d = ""

for i in a:
        if i == '5':
                c = c + '6'
        else:
                c = c + i


for i in b:
        if i == '5':
                d = d + '6'
        else:
                d = d + i


sol2 = str(int(c) + int(d))

print(sol1 + " " +  sol2)
