def even_or_odd(x):

    if x == 0:
        return "NULL"

    print("EVEN ", end="") if x % 2 == 0 and x != 0 else print("ODD ", end="")

    return "POSITIVE" if x > 0 else "NEGATIVE"


n = int(input())

for i in range(n):
    print(even_or_odd(int(input())))
