n = int(input())
vowels = ['a','e','i','o','u']

for i in range(n):

    word = input()

    cns = 0

    for j in word:

        if cns == 3:
            break

        if j.lower() not in vowels:
            cns += 1
        else:
            cns = 0

    if cns == 3:
        print("{} nao eh facil".format(word))
    else:
        print("{} eh facil".format(word))
