N = int(raw_input())

lista = [int(i) for i in raw_input().split(' ')]

lista.sort()

sol = ""
sol += str(lista[-1])

for i in range(N - 1):
        sol += " " + str(lista[i])

print(sol)
        
