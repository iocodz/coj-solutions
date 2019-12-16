def sum(a):
    b = a + 1
    sol = int(a * b / 2)
    return sol

a = int(raw_input())

before = sum(a)

a += 1

after = sum(a) - 1

before += int(after / 10)

after = after % 10

print (str(before) + "." + str(after))