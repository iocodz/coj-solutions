S, K = raw_input(), int(raw_input())

conj = set(S)
diff = len(conj)    

if K > len(S):
    print("NIE")
else:
    print(max(0, K - diff))