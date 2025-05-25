# Upper half of the diamond
for i in range(5):
    for j in range(i, 5):
        print(" ", end="")         # Spaces before stars
    for p in range(i + 1):
        print("*", end="")         # Left half of stars
    for k in range(i):
        print("*", end="")         # Right half of stars
    print()

# Lower half of the diamond
for i in range(5, -1, -1):
    for j in range(i, 5):
        print(" ", end="")         # Spaces before stars
    for p in range(i + 1):
        print("*", end="")         # Left half of stars
    for k in range(i):
        print("*", end="")         # Right half of stars
    print()


    # OUTPUT:-
    #       *    
    #      ***
    #     *****
    #    *******
    #   *********
    #  ***********
    #   *********
    #    *******
    #     *****
    #      ***
    #       *
