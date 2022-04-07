def offer(x, y):
    print(x // y + x % y)


n = int(input())

for i in range(n):
    n, k = map(int, input().split())
    offer(n, k)
