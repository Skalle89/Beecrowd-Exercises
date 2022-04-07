def six_odds(x):
    if x % 2 == 0:
        x += 1

    for i in range(x, x + 12, 2):
        print(i)


six_odds(int(input()))
