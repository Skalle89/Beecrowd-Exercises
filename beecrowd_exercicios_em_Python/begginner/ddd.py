def find_ddd(a, b):

    if b in a:
        print(a[b])

    return "DDD nao cadastrado"


def check_ddd(x):
    ddd = {61: 'Brasilia', 71: 'Salvador', 11: 'Sao Paulo', 21: 'Rio de Janeiro', 32: 'Juiz de Fora', 19: 'Campinas',
           27: 'Vitoria', 31: 'Belo Horizonte'}

    return find_ddd(ddd, x)


n = int(input())

print(check_ddd(n))
