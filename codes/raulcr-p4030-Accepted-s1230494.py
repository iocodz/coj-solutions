n = int(raw_input())

while n > 0:
    n -= 1

    a, b = raw_input().split(" ")

    a = int(a)
    b = int(b)

    sol = int(int(a / b) / 2)

    if sol == 0:
        print("Majpy is to short!")
    elif sol == 1:
        print("Majpy do it 1 time!")
    else:
        print("Majpy do it " + str(sol) + " times!")
