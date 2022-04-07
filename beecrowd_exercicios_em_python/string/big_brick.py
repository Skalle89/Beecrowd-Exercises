keyboard = dict()
keyboard[" "] = "0"
l = 'a'
m = '2'

for i in range(26):

    if i % 3 == 0 and i > 0 and i % 7 != 0 and i % 8 != 0 and i % 18 != 0 or i == 22 or i == 19:
        m = chr(ord(m[0]) + 1)

    keyboard[chr(ord(l) + i)] = m
    m += m[0]

n = int(input())
for i in range(n):

    rslt = ""
    word = input()

    for j in range(len(word)):
        if word[j].isupper():
            rslt += "#"
        elif j > 0 and keyboard[word[j]][0] == keyboard[word[j - 1].lower()][0]:
            rslt += "*"

        rslt += keyboard[word[j].lower()]

    print(rslt)

# keyboard[0] = " "
# keyboard[1] = ""
#
# l1,l2,l3 = 'a', 'b', 'c'
#
# for i in range(2, 10):
#     keyboard[i] = [l1,l2,l3]
#     l1 = chr(ord(l1) + 3)
#     l2 = chr(ord(l2) + 3)
#     l3 = chr(ord(l3) + 3)
#
#     if i == 7 or i == 9:
#         keyboard[i].append(chr(ord(keyboard[i][-1]) + 1))
#         l1 = chr(ord(l1) + 1)
#         l2 = chr(ord(l2) + 1)
#         l3 = chr(ord(l3) + 1)
#

# for k in keyboard.keys():
#     print(k, keyboard[k])
