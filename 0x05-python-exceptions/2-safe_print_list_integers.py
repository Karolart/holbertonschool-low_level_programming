def safe_print_list_integers(my_list=[], x=0):
    elment = 0

    for i in range(x):
        try:
            if type(my_list[i]) is int and element != x:
                print('{:d}'.format(my_list[i]), end='')
                element += 1
        except TypeError:
            continue

    print()

    return element
