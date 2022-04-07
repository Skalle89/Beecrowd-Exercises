def inserir_palavras_e_corrigir_espacos():
    words = []

    for i in range(n):
        m = input()
        words.append(m)
        rslt = ""
        for j in range(len(words[-1])):
            if j > 0 and words[-1][j] == " " and words[-1][j - 1] == " ":
                rslt += ""
            else:
                rslt += words[-1][j]

        if len(rslt) > 0 and rslt[0] == " ":
            rslt = rslt[1:]

        if len(rslt) > 0 and rslt[-1] == " ":
            rslt = rslt[:-1]

        words[-1] = rslt

    return words


def checar_maior(words):

    maior = words[0]

    for j in range(1, len(words)):
        if len(words[j]) > len(maior):
            maior = words[j]

    for j in range(len(words)):
        words[j] = " " * (len(maior) - len(words[j])) + words[j]


def mostrar(words):
    for i in range(len(words)):
        print(words[i])


n = int(input())

while n != 0:

    words = inserir_palavras_e_corrigir_espacos()

    checar_maior(words)

    mostrar(words)

    n = int(input())

    if n != 0:
        print("")
