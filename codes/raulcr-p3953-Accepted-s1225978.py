from sys import stdin, stdout
k = int(stdin.readline())

word = [str(i) for i in stdin.readline()]

diff = dict()

for i in word:
        if i not in diff:
                diff[i] = 1
        else:
                diff[i] += 1

if len(diff) < k:
        stdout.write("NO\n")
else:
        stdout.write("YES\n")
        sol = ""
        word.reverse()

        for i in word:
                if i in diff:
                        if diff[i] - 1 >= 0:
                                sol += i
                                diff[i] -= 1
                        if diff[i] == 0:
                                del diff[i]
                        if len(diff) < k:
                                break

        stdout.write (sol[::-1])
