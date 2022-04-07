n = int(input())

feedback = {
    1: "Rolien",
    2: "Naej",
    3: "Elehcim",
    4: "Odranoel",

}

for i in range(n):

    k = int(input())

    for j in range(k):
        l = int(input())
        print(feedback[l])
