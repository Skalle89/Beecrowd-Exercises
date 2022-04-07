import math


def fat(x):
    rslt = 1

    for i in range(2, x + 1):
        rslt *= i

    return rslt


n = int(input())

while n != 0:

    rslt = 0

    for i in range(1, int(math.log10(n)) + 2):
        rslt += n % 10 * fat(i)
        n //= 10

    print(rslt)

    n = int(input())

