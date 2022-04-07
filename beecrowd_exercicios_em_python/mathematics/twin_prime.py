def is_prime(x):
    # if x == 0 or x == 1 or (x % 2 == 0 and x != 2):
    #     return False

    for j in range(3, int(n**0.5) + 1, 2):
        if x % j == 0:
            return False

    return True


def twins(y):
    for i in range(y, 4, -2):
        if is_prime(i) and is_prime(i-2):
            return [i-2, i]


n = int(input())

if n % 2 == 0:
    n -= 1

print(*twins(n))

