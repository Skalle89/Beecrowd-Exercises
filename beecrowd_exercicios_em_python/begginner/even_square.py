def even_square(x):
    for i in range(2, x + 1, 2):
        print("{}^{} = {}".format(i, i, i * i))


even_square(int(input()))
