n = input()
s, j = 0, 0
while n.split()[0] != "ABEND":
    if n.split()[0] == "SALIDA":
        s += int(n.split()[1])
        j += 1
    else:
        s -= int(n.split()[1])
        j -= 1
    n = input()

print("{}\n{}".format(s, j))
