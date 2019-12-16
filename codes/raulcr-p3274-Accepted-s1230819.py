n = int(raw_input())

criba = [int(0) for i in range(1, 1005)]

for i in range(2, 1003):
    if criba[i] == 0:
        criba[i] = 1
        for j in range(i * 2, 1003, i):
            criba[j] += 1

while n > 0:
    n -= 1
    a = int(raw_input())

    print(criba[a])
