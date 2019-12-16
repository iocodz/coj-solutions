from sys import stdin, stdout

N = int(stdin.readline())

cad = [str(stdin.readline().strip()) for i in range(N) ]
sol = []
cad.sort()

for i in range(N):
    for j in range(N):
        if len(cad[j]) < len(cad[i]) and cad[j] in cad[i]:
            sol.append([j, i])

sol.sort()
print (len(sol))
for i in sol:
    stdout.write(cad[i[0]] + " " + cad[i[1]] + "\n")
