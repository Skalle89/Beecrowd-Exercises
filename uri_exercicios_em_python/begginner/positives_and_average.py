def pos_and_avg(x):
    return [x] if x > 0 else []


def solve():
    numbers = []

    for i in range(6):
        numbers += pos_and_avg(float(input()))

    print("{} valores positivos\n{:.1f}".format(len(numbers), sum(numbers) / len(numbers)))


solve()
