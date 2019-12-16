n = int(raw_input())

arr = [int(0) for i in range(1001)]

while n > 0 :
	a = int(raw_input())
	arr[a] += 1
	n -= 1

c1 = 0
c2 = 0
for i in range(1001):
	c1 += int(arr[i] / 4)
	arr[i] = int(arr[i] % 4)

for i in range(1001):
	c2 += int(arr[i])

print c1, c2