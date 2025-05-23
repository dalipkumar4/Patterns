int i,j,k;
    for (i = 1; i <= 5; i++) //Rows
    {
        for (j = 1; j < i; j++) // Space
        {
            printf("-");
        }
        for (k = i; k <= 5; k++) // Columns
        {
            printf("*");
        }
        printf("\n");
    }
    // OUTPUT:-
    // *****
    //  ****
    //   ***
    //    **
    //     *
     
