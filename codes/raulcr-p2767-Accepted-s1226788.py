from sys import stdin, stdout

def leer():
        return stdin.readline().strip()

mod = int(1000000007)

while True:
        a = leer()
        if a == "":
                break
        
        a = int(a)

        suma = a * (a + 1) * (2 * a + 1)
        suma /= int(6)

        suma %= mod

        suma = int(suma)

        stdout.write(str(suma) + "\n")
