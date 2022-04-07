while True:
    try:
        n = input()
        e = ["","",""]
        x = 0
        p = 0
        for i in range(len(n)):
            if n[i] == "+" or n[i] == "=":
                x += 1

            if n[i] != "+" and n[i] != "=":
                e[x] += n[i]
                if n[i].isalpha():
                    p = i

        if n[p] == "J":
            print(int(e[0]) + int(e[1]))
        if n[p] == "R":
            print(int(e[2]) - int(e[1]))
        if n[p] == "L":
            print(int(e[2]) - int(e[0]))


    except EOFError:
        break
