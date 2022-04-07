top = {1: range(1, 2),
       3: range(2, 4),
       5: range(4, 6),
       10: range(6, 11),
       25: range(11, 26),
       50: range(26, 51),
       100: range(51, 101)
       }

n = int(input())

for k in top.keys():
    if n in top[k]:
        print("Top %d" % k)
