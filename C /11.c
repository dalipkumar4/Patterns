#include <stdio.h>

int main()
{
    int i, j, k, p;

    for (i = 0; i <= 5; i++)
    {
        for (j = 1; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (i = 0; i <= 5; i++)
    {
        for (j = i; j < 5; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

// OUTPUT:-
//  *
//  **
//  ***
//  ****
//  *****
//  ****
//  **
//  *
