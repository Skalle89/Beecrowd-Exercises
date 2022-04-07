n = int(input())

for i in range(n):
    rslt = ""

    m = input()

    for j in range(len(m)):
        if m[j].isalpha() and m[j] == m[j].lower():
            rslt += m[j]

    print(rslt[::-1])
