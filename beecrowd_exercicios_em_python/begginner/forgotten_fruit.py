fruits = {}
scrambled_list = []

n, m = map(int, input().split())

for i in range(n):
    fruit = input()
    fruits[fruit.lower()] = ""

for j in range(m):
    scrambled_line = input()
    scrambled_list.append(scrambled_line.lower())

for k in fruits.keys():
    ok = 0
    for l in scrambled_list:
        if k in l or k in l[::-1]:
            fruits[k] = "Sheldon come a fruta " + k
            ok = 1
    if ok == 0:
        fruits[k] = "Sheldon detesta a fruta " + k


for z in fruits.keys():
    print(fruits[z])

#TODO
#faz sem trapacear