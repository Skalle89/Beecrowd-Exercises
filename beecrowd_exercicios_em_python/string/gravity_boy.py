n = int(input())

ceiling = input().split()
floor = input().split()

chg_floor, chg_ceiling = 0, 0

ok, path_1, path_2 = True, True, True

if floor[0] == '0':
    path_1 = False

if ceiling[0] == '0':
    path_2 = False


if path_1:
    for i in range(n-1):
        if ok:
            if int(floor[i]) < int(floor[i+1]) or floor[i+1] == '0':
                ok = False
                chg_floor += 1

        else:
            if int(ceiling[i]) < int(ceiling[i + 1]) or ceiling[i + 1] == '0':
                ok = True
                chg_floor += 1

ok = False

if path_2:
    for i in range(n-1):
        if ok:
            if int(floor[i]) < int(floor[i+1]) or floor[i+1] == '0':
                ok = False
                chg_ceiling += 1

        else:
            if int(ceiling[i]) < int(ceiling[i + 1]) or ceiling[i + 1] == '0':
                ok = True
                chg_ceiling += 1


if path_1 and path_2:
    if chg_floor < chg_ceiling:
        print(chg_floor)
    else:
        print(chg_ceiling)
else:
    if chg_floor != 0:
        print(chg_floor)
    else:
        print(chg_ceiling)
