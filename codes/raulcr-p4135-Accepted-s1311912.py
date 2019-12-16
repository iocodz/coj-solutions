a = int(raw_input())
sumat = int((a + 1) * a / 2)

numbers = [int(i) for i in raw_input().split(" ")]

for i in numbers:
   sumat -= i

print(sumat)