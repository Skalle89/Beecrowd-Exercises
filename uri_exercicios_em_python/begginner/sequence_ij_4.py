def seq_ij_4():
    for i in range(0, 21, 2):
        i /= 10

        print("I={:g} J={:g}".format(i, 1 + i))
        print("I={:g} J={:g}".format(i, 2 + i))
        print("I={:g} J={:g}".format(i, 3 + i))


seq_ij_4()
