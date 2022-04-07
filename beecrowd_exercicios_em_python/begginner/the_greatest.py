def the_greatest(x, y):
    return (x + y + abs(x - y)) // 2


a, b, c = map(int, input().split())

print("{} eh o maior".
      format(the_greatest(a, the_greatest(b, c)))
      )
