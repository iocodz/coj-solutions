def sumap(a):
    return (a * (a + 1)) / 2

def suman(a):
    a = a * -1
    return ((a * (a + 1)) / 2)

k = input()
k = int(k)

if k == 0:
    print(0)
	
elif k > 0:
    suma = int(sumap(k))
    print (suma)

else:
    suma = int(1 - suman(k))
    print(suma)
