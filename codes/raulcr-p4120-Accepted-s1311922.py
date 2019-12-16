str = raw_input()

vow = 0
cons = 0

for i in str:
    if i == 'a' or i == 'e' or i == 'i' or i == 'o' or i == 'u':
        vow += 1
    else:
        cons += 1

if vow >= cons or cons - vow == 1:
    print("perfect")
else:
    print("imperfect")