def in_exam_student(y):
    print("Aluno em exame.")

    e = float(input())
    print("Nota do exame: {:.1f}".format(e))

    y += e
    y /= 2

    print(check_rslt(y, 0))

    return "Media final: " + str(y)


def check_rslt(x, y=1):
    if x >= 7.0 and y or x >= 5.0 and not y:
        return "Aluno aprovado."

    return "Aluno reprovado."


def get_avg():
    a, b, c, d = map(float, input().split())

    avg = (a * 2 + b * 3 + c * 4 + d * 1) / 10

    return avg


def take_exams():
    rslt = get_avg()

    print("Media: {:.1f}".format(rslt))

    if rslt >= 7.0 or rslt < 5.0:
        return check_rslt(rslt)

    return in_exam_student(rslt)


print(take_exams())
