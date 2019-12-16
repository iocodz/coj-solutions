dic = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_.ABCDEFGHIJKLMNOPQRSTUVWXYZ_."
while(True):
    n = raw_input().split(" ")
    if n[0] == "0":
        break
    print("".join(([dic[(dic.find(x) + int(n[0]))] for x in n[1][::-1]])))