meal = [[0, 0], [0, 0], [0, 0]]

for i in range(2):
    meal[0][i], meal[1][i], meal[2][i] = map(int, input().split())

total = 0

for i in range(len(meal)):
    if meal[i][0] < meal[i][1]:
        total += meal[i][1] - meal[i][0]

print(total)
