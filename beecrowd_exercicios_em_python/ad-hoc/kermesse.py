def kermesse(l):
    for i in range(len(l)):
        if l[i] == i + 1:
            return l[i]


n = int(input())
i = 1
while n != 0:
    line = list(map(int, input().split()))

    print("Teste %d\n%d\n" % (i, kermesse(line)))

    n = int(input())

    i += 1
