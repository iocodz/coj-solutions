a = [int(i) for i in raw_input().split(' ')]

ind = "ABC"
orden = raw_input()

a.sort()

print (str(a[ind.find(orden[0])] )+ " " + str(a[ind.find(orden[1])]) + " " + str(a[ind.find(orden[2])]))
