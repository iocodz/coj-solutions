def suma(T):
	return (1 + T) * T // 2


def solve(C, T):
	ini, fin = 1, 2 ** 64
	cnt = fin - ini
	while cnt > 0:
		F = ini
		aux = cnt // 2
		F += aux;
		if T * F + suma(T - 1) < C:
			ini = F + 1
			cnt -= aux + 1
		else:
			cnt = aux
	return ini


N = int(raw_input())
for i in range(N):
	C, T = raw_input().split()
	print(solve(int(C), int(T)))