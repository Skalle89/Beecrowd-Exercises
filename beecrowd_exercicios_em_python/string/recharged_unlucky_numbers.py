def chk(n):
    for i in range(len(n) - 1):
        if n[i] == "1" and n[i + 1] == "3":
            print(n,"es de Mala Suerte")
            return

    print(n,"NO es de Mala Suerte")


n = input()

chk(n)

