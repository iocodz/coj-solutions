def ok(a):
    a = a.split(' ')
    b = ''
    for i in a:
        b += i
    return b

a = raw_input()
b = raw_input()

if a == b:
    print("Accepted")
elif ok(a) == ok(b):
    print("Presentation Error")
else:
    print("Wrong Answer")