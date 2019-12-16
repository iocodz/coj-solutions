import string
values = raw_input()
try:
    while values:
        values = string.split(values," ")
        print int(values[0])+int(values[1])
        values = raw_input()
except EOFError:
    exit