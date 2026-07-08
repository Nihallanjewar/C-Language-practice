#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        for (j = 1; j <= 8 - (2 * i); j++)
        {
            printf(" ");
        }
        for (j = i; j >= 1; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = 3; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        for (j = 8 - (2 * i); j >= 1; j--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}