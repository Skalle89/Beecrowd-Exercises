def root(m, n):
    if n == 0:
        return m
    return m + 1/(root(6.0, n-1))


n = int(input())
print("{:.10f}".format(root(3.0, n)))

##############################################################

r = 1/6
if n == 0:
    print("{:.10f}".format(3.0))
else:
    for i in range(n-1):
        r = 1/(6+r)

print("{:.10f}".format(3.0 + r))
