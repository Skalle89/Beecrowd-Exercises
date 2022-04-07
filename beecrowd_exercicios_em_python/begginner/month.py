def check_month(x):
    months = ["January", "February", "March", "April", "May", "June", "July", "August",
              "September", "October", "November", "December"]

    return months[x-1]


n = int(input())

print(check_month(n))
