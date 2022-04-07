import math

n = int(input())

m = {1: "one", 2: "two", 3: "three", 4: "four", 5: "five", 6: "six", 7: "seven", 8: "eight", 9: "nine", 10: "ten",
     11: "eleven", 12: "twelve", 13: "thirteen", 14: "fourteen", 15: "fifteen", 16: "sixteen", 17: "seventeen",
     18: "eighteen", 19: "nineteen", 20: "twenty", 30: "thirty", 40: "forty", 50: "fifty", 60: "sixty", 70: "seventy",
     80: "eighty", 90: "ninety", 100: "one hundred"}

for j in range(1000):

    x = 0

    if round(math.log(n) / math.log(10)) + 1 > 1 and n not in m:
        x += 1

    for i in range(round(math.log(n) / math.log(10)) + 1):
        if n % 10 != 0:
            x += len(m[n % 10 * 10 ** i])

        n = n // 10
    n = x

print(n)
