n = int(input())
j = 1

while n != 0:

    op = input()

    rslt = 0
    vals = {"+": 1, "-": -1, op[-1]: 1}
    sin = 1
    num = ""

    for i in range(len(op)):

        if op[i] == "+" or op[i] == "-":
            rslt += int(num) * sin
            sin = vals[op[i]]
            num = ""

        else:
            num += op[i]

    print("Teste {:d}\n{:d}\n".format(j, rslt + int(num)*sin))

    n = int(input())

    j += 1
