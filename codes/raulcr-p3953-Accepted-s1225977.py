k = int(raw_input())

word = [str(i) for i in raw_input()]

diff = dict()

for i in word:
        if i not in diff:
                diff[i] = 1
        else:
                diff[i] += 1

word.reverse()

if len(diff) < k:
        print("NO")
else:
        print ("YES")
        sol = ""

        for i in word:
                if i in diff:
                        if diff[i] - 1 >= 0:
                                sol += i
                                diff[i] -= 1
                        if diff[i] == 0:
                                del diff[i]
                        if len(diff) < k:
                                break

        print (sol[::-1])
