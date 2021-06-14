def solve():
    animals = {"T": ["Total:", 0, "cobaias"],
               "C": ["Total de coelhos:", 0],
               "R": ["Total de ratos:", 0],
               "S": ["Total de sapos:", 0],
               "c": ["Percentual de coelhos:", 0, "%"],
               "r": ["Percentual de ratos:", 0, "%"],
               "s": ["Percentual de sapos:", 0, "%"]
               }

    for i in range(int(input())):
        x, y = input().split()
        animals[y][1] += int(x)
        animals["T"][1] += int(x)

    animals["c"][1] = "{:.2f}".format(animals["C"][1]/animals["T"][1]*100)
    animals["r"][1] = "{:.2f}".format(animals["R"][1]/animals["T"][1]*100)
    animals["s"][1] = "{:.2f}".format(animals["S"][1]/animals["T"][1]*100)

    for k in animals.keys():
        print(*animals[k])


solve()
