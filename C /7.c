#include <stdio.h>

int main()
{
    int i, j, p, k;

    for (i = 0; i < 5; i++)
    {
        for (j = i; j < 5; j++)
        {
            printf(" ");
        }
        for (k = 0; k <= i; k++)
        {
            printf("*");
        }
        for (p = 0; p < i; p++)
        {
            printf("*");
        }

        printf("\n");
    }
    for (i = 5; i >= 0; i--)
    {
        for (j = i; j < 5; j++)
        {
            printf(" ");
        }
        for (k = 0; k <= i; k++)
        {
            printf("*");
        }
        for (p = 0; p < i; p++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

    // OUTPUT:-
    //       *    
    //      ***
    //     *****
    //    *******
    //   *********
    //  ***********
    //   *********
    //    *******
    //     *****
    //      ***
    //       *
