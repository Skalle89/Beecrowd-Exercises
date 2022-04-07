def get_salary(x, y, z):
    return [x, y * z]


number = int(input())
worked_hours = int(input())
amount = float(input())

print("NUMBER = {}\n"
      "SALARY = U${:.2f}"
      .format(get_salary(number, worked_hours, amount)[0],
              get_salary(number, worked_hours, amount)[1])
      )
