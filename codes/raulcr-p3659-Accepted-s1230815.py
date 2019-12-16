n = int(raw_input())

now = 1
fact = []
for i in range(1, 45):
    now *= i
    fact.append(now)


while n > 0:
    n -= 1
    a = int(raw_input())

    print(fact[a - 1])
