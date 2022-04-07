def age_in_days(x):
    return [x // 365, x % 365 // 30, x % 365 % 30]


dias = int(input())

print(
    "{} ano(s)\n{} mes(es)\n{} dia(s)".format(
        age_in_days(dias)[0],
        age_in_days(dias)[1],
        age_in_days(dias)[2])
)
