def liters_needed(x, y):
    return (x*y)/12


time = int(input())
average_speed = int(input())

print("{:.3f}".format(liters_needed(time, average_speed)))
