def time_conversion(x):
    return [x // 3600, x % 3600 // 60, x % 3600 % 60]


n = int(input())

print("{}:{}:{}".
      format(time_conversion(n)[0],
             time_conversion(n)[1],
             time_conversion(n)[2])
      )
