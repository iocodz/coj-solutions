n = int(raw_input())

def aCadena(n,base):
   cadenaConversion = "0123456789ABCDEF"
   if n < base:
      return cadenaConversion[n]
   else:
      return aCadena(n//base,base) + cadenaConversion[n%base]

while n > 0:
    n -= 1
    a, b = raw_input().split(' ')
    a = int(a)
    b = int(b)

    print(aCadena(a, b))
