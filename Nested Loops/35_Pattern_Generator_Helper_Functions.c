/*
------------------------------------
Weekly Boss #1
Pattern Generator

Features:
- Half Pyramid
- Inverted Half Pyramid
- Full Pyramid
- Inverted Full Pyramid
- Butterfly Pattern
- Diamond Pattern

Made by: Nihal Lanjewar
------------------------------------
*/
#include <stdio.h>
void halfpyramid(int n)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = i; j >= 1; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}
void fullpyramid(int n)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
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
void invertedhalfpyramid(int n)
{
    int i, j;
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void invertedfullpyramid(int n)
{
    int i, j;
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= n - i; j++)
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
void butterflypattern(int n)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        for (j = 1; j <= 2 * (n - i); j++)
        {
            printf(" ");
        }
        for (j = i; j >= 1; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = n - 1; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        for (j = 2 * (n - i); j >= 1; j--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void diamondpattern(int n)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= (2 * i) - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = n - 1; i >= 1; i--)
    {
        for (j = 1; j <= n - i; j++)
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
int main()
{
    int Input = 0, size;
    while (Input != 7)
    {
        printf("     Pattern Generator     \n");
        printf("1. Half Pyramid\n");
        printf("2. Inverted Half Pyramid\n");
        printf("3. Full Pyramid\n");
        printf("4. Inverted full Pyramid\n");
        printf("5. Butterfly Pattern\n");
        printf("6. Diamond Pattern\n");
        printf("7. Exit\n");
    
        printf("Input: ");
        scanf("%d", &Input);

        if (Input == 1)
        {
            printf("Enter Size: ");
            scanf("%d", &size);

            halfpyramid(size);
        }
        if (Input == 2)
        {
            printf("Enter Size: ");
            scanf("%d", &size);

            invertedhalfpyramid(size);
        }
        if (Input == 3)
        {
            printf("Enter Size: ");
            scanf("%d", &size);

            fullpyramid(size);
        }
        if (Input == 4)
        {
            printf("Enter Size: ");
            scanf("%d", &size);

            invertedfullpyramid(size);
        }
        if (Input == 5)
        {
            printf("Enter Size: ");
            scanf("%d", &size);

            butterflypattern(size);
        }
        if (Input == 6)
        {
            printf("Enter Size: ");
            scanf("%d", &size);

            diamondpattern(size);
        }
        if (Input == 7)
        {
            printf("Thank You!!\n");
        }
        if (Input < 1 || Input > 8)
        {
            printf("Invalid Input!!\n");
        }
    }
    return 0;
}