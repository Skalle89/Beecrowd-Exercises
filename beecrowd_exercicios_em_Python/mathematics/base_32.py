def dec_to_32(x):

    rslt = ""

    while x != 0:
        if x % 32 > 9:
            rslt += chr(x % 32 + 55)
        else:
            rslt += str(x % 32)

        x //= 32

    return rslt[::-1]


n = int(input())

while n != 0:
    print(dec_to_32(n))
    n = int(input())

print(0)
