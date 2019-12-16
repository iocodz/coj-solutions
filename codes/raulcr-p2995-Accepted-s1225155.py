a = int(raw_input())

while a > 0:
        record = raw_input().split(' ')
        newlist = []
        while True:
                line = raw_input()
                if line == "what does the fox say?":
                        break;
                c, d, e = line.split(' ')
                newlist.append(e)
        sol = []
        for i in record:
                if i not in newlist:
                        sol.append(i)

        sols = sol[0]
        for i in range(1, len(sol)):
                sols = sols + " " + sol[i]
        print (sols)
        a -= 1
