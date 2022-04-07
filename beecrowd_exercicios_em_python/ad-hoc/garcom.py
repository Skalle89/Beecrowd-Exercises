n = int(input())
q = 0

for i in range(n):
    l, c = map(int, input().split())

    if l > c:
        q += c

print(q)
