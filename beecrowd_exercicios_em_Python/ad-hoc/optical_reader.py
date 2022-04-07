n = int(input())
while n != 0:
    for i in range(n):
        rslt = "*"
        m = list(map(int, input().split()))

        for j in range(len(m)):
            if m[j] <= 127:
                if rslt == "*":
                    rslt = chr(j + 65)
                else:
                    rslt = "*"
                    break

        print(rslt)
    n = int(input())