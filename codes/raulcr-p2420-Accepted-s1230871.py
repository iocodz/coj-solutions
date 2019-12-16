n = int(input())

def aCadena(n,base):
   cadenaConversion = "0123456789ABCDEF"
   if n < base:
      return cadenaConversion[n]
   else:
      return aCadena(n//base,base) + cadenaConversion[n%base]

def pal(a):
    a = str(a)
    i = 0
    j = len(a) - 1
    while i <= j:
        if a[i] != a[j]:
            return 0
        i += 1
        j -= 1

    return 1

while n > 0:
    n -= 1
    a = input()
    a = int(a)
    a = aCadena(a, 2)

    if pal(a):
        print("YES")
    else:
        print("NO")
