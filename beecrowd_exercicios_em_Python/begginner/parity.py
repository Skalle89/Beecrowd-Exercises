s = input()
n = 0

for i in s:
    if i == '1':
        n += 1

if n % 2 == 0:
    print(s + '0')
else:
    print(s + '1')

