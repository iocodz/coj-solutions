a = int(raw_input())
s = 1

def kaka(n):
    return ((n * (n + 1) * (2 * n + 1)) / 6)

while kaka(s) + kaka(s - 1) <= a:
    s += 1

s -= 1

print(s)
