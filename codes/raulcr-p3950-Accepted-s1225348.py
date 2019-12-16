from sys import stdin, stdout 

def leer():
    return stdin.readline().strip()

N, M = leer().split(' ')

N, M = int(N), int(M)

text = [str(leer()) for i in range(N)]
patt = [str(leer()) for i in range(M)]
fq = [int(0) for i in range(M)]

for i in text:
    ind = 0
    for j in patt:
        if i.endswith(j):
            fq[ind] += 1
        ind += 1

for i in fq:
    stdout.write(str(i) + "\n")
