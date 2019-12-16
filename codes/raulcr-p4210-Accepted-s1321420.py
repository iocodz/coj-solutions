n, s = raw_input().split()
n, s = int(n), int(s)

arr = [int(i) for i in raw_input().split()]
arr.sort()

esta = [0] * 1005

for i in arr:
    esta[i] += 1

esta[0] = -199999

sol = False

for i in range(n):
    for j in range(i + 1, n):
        esta[arr[i]] -= 1
        esta[arr[j]] -= 1
        sum = s - (arr[i] + arr[j])
        if sum > 0 and sum <= 1000 and esta[sum] > 0:
            sol = True
            break
        esta[arr[i]] += 1
        esta[arr[j]] += 1
    if sol is True:
        break

if sol is True:
    print ("TAK")
else:
    print ("NIE")