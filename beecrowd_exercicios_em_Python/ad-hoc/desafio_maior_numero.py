n = list(map(int, input().split()))
m = n[0]

for i in range(len(n)):
    if n[i] > m:
        m = n[i]

print(m)
