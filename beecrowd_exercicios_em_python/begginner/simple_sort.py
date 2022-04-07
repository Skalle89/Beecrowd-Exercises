def swap(d, e, f):
    d[e], d[f] = d[f], d[e]


def simple_sort(a, b, c):
    numbers = [a, b, c]

    for i in range(1, len(numbers)):
        j = i
        while j > 0 and numbers[j] < numbers[j - 1]:
            swap(numbers, j - 1, j)
            j -= 1

    return numbers


def show_results(g, h, i, j):
    for w in range(len(j)):
        print(j[w])

    print("\n{}\n{}\n{}".format(g, h, i))


x, y, z = map(int, input().split())

ordered = simple_sort(x, y, z)

show_results(x, y, z, ordered)
