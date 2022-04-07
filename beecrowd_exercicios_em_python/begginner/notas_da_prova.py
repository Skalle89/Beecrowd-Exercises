def check(x):

    if x == 0:
        print("E")
        return

    grades = {
        "1 35": "D",
        "36 60": "C",
        "61 85": "B",
        "86 100": "A"
        }

    for k in grades.keys():
        if x in range(list(map(int, k.split()))[0], list(map(int, k.split()))[1]+1):
            print(grades[k])
            return


n = int(input())
check(n)

