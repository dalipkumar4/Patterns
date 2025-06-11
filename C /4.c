#include <stdio.h>

int main()
{
    int i, j, k, p;

    for (i = 0; i <= 5; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf(" ");
        }
        for (k = i; k < 5; k++)
        {
            printf("*");
        }
        for (p = i; p <= 5; p++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
