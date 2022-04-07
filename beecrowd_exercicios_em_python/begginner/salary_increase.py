def create_table():
    values = {}
    readjustment = [0.15, 0.12, 0.1]
    j = 0

    for i in range(0, 801, 400):
        values[readjustment[j]] = [i, i + 400]
        j += 1

    values[0.07] = [1200, 2000]

    return values


def show_rslt(u, v):
    print("Novo salario: {:.2f}\nReajuste ganho: {:.2f}\nEm percentual: {} %".
          format(v + v * u, u * v, int(u * 100)))


def check_salary(t, s):
    for k in t.keys():
        if t[k][0] < s <= t[k][1]:
            return show_rslt(k, s)

    print("Novo salario: {:.2f}\nReajuste ganho: {:.2f}\nEm percentual: 4 %".
          format(s + s*0.04, s*0.04))


table = create_table()

salary = float(input())

check_salary(table, salary)

