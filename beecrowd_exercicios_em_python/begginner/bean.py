def find_beans(x):
    for i in range(len(x)):
        if x[i] == "1":
            print(i+1)
            return


cups = input().split()

find_beans(cups)
