#include <stdio.h>

int main()
{
    int i, j, p;

    for (i = 0; i < 5; i++)
    {
        for (j = i; j < 5; j++)
        {
            printf(" ");
        }
        for (p = 0; p <= i; p++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
