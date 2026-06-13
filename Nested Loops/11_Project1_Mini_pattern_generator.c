/*
===== PATTERN GENERATOR =====
1. Square Pattern
2. Increasing Stars
3. Reverse Stars
4. Increasing Numbers
*/
#include <stdio.h>
int main()
{
    int i, j, Input;
    printf("===== PATTERN GENERATOR =====\n");
    printf("1. Square Pattern\n");
    printf("2. Increasing Stars\n");
    printf("3. Reverse Stars\n");
    printf("4. Increasing Numbers\n");

    printf("INPUT: ");
    scanf("%d", &Input);

    if (Input == 1)
    {
        printf("Square Pattern\n");
        for (i = 1; i <= 5; i++)
        {
            for (j = 1; j <= 5; j++)
            {
                printf("*", j);
            }
            printf("\n");
        }
    }
    else if (Input == 2)
    {
        printf("Increasing Stars\n");
        for (i = 1; i <= 5; i++)
        {
            for (j = i; j >= 1; j--)
            {
                printf("*", i);
            }
            printf("\n");
        }
    }
    else if (Input == 3)
    {
        printf("Reverse Stars\n");
        for (i = 5; i >= 1; i--)
        {
            for (j = i; j >= 1; j--)
            {
                printf("*", j);
            }
            printf("\n");
        }
    }
    else if (Input == 4)
    {
        printf("Increasing Numbers\n");
        for (i = 1; i <= 5; i++)
        {
            for (j = 1; j <= i; j++)
            {
                printf("%d", j);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Invalid Input\n");
    }
    return 0;
}