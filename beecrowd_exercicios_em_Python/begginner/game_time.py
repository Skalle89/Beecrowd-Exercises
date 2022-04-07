def game_time(a, b):
    return b - a + 24 if b - a <= 0 else b - a


x, y = map(int, input().split())

print("O JOGO DUROU {} HORA(S)".format(game_time(x, y)))
