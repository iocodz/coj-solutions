import sys

raw_input=lambda:sys.stdin.readline().rstrip()
input=lambda:int(raw_input())

a = raw_input()

sol = ''
leng = 0

ant = ''
lena = 0
for i in a:
	if ant == i:
		lena += 1
	else:
		if leng < lena:
			sol = ant
			leng = lena
		ant = i
		lena = 1
if leng < lena:
	sol = ant
	leng = lena

print (str(leng) + " " + str(sol))
