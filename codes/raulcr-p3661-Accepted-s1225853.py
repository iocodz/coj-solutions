from sys import stdout

alph = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_."

def position(a):
    for i in range(len(alph)):
        if alph[i] == a:
            return i


def corrim(a, cant):
    for i in range(position(a), len(alph)):
        if cant == 0:
            return alph[i]
        cant -= 1
         
    for i in range(position(a)):
        if cant == 0:
            return alph[i]
        cant -= 1

while True:
   try:
      c, en = raw_input().split(' ')
      c = int(c)
   except Exception as e:
      break

   sol = []

   for i in range(len(en)):
       sol.append(corrim(en[i], c))

   sol.reverse()

   for i in range(len(sol)):
      stdout.write(str(sol[i]))

   stdout.write("\n")
