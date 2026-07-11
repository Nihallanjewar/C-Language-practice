#include <stdio.h>
int main()
{
    int i, j, Input;
    printf("     Pattern Generator     \n");
    printf("1. Half Pyramid\n");
    printf("2. Full Pyramid\n");
    printf("3. Butterfly Pattern\n");
    printf("4. Diamond Pattern\n");

    printf("\nInput: ");
    scanf("%d", &Input);

    if (Input == 1)
    {
        printf("1. Half Pyramid\n");
        for (i = 1; i <= 5; i++)
        {
            for (j = i; j >= 1; j--)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    else if (Input == 2)
    {
        printf("2. Full Pyramid\n");
        for (i = 1; i <= 5; i++)
        {
            for (j = 1; j <= 5 - i; j++)
            {
                printf(" ");
            }
            for (j = 1; j <= (2 * i) - 1; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    else if (Input == 3)
    {
        printf("3. Butterfly Pattern\n");
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
            for (j = i; j >= 1; j--)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    else if (Input == 4)
    {
        printf("4. Diamond Pattern\n");
        for (i = 1; i <= 4; i++)
        {
            for (j = 1; j <= 4 - i; j++)
            {
                printf(" ");
            }
            for (j = 1; j <= (2 * i) - 1; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        for (i = 3; i >= 1; i--)
        {
            for (j = 1; j <= 4 - i; j++)
            {
                printf(" ");
            }
            for (j = 1; j <= (2 * i) - 1; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    else
    {
        printf("Invalid Input!!\n");
    }
    return 0;
}