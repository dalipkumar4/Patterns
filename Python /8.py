for i in range(5, -1, -1):
    for j in range(i, 5):
        print(" ", end="")        
    for p in range(i + 1):
        print("*", end="")   
    for k in range(i):
        print("*", end="")        
    print()

    # OUTPUT:-
    # ***********
    #  *********
    #   *******
    #    *****
    #     ***
    #      *
