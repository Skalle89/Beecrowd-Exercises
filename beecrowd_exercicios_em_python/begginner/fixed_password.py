def check(x):
    return x != 2002


def solve():
    while check(int(input())):
        print("Senha Invalida")

    print("Acesso Permitido")


solve()
