/*USING BINOMIAL COEFFICIENT FORMULA*/
#include <stdio.h>
int factorial(int n)
{
    int fact = 1;
    while (n > 0)
    {
        fact *= n;
        n--;
    }
    return fact;
}
int main()
{
    int i, j, numerator, denominator, first, second, answer;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5 - i; j++)
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++)
        {
            if (j == 1 || j == i)
            {
                printf(" 1");
            }
            else
            {
                numerator = factorial(i - 1);
                first = factorial(j - 1);
                second = factorial(i - j);
                denominator = first * second;
                answer = numerator / denominator;

                printf("%2d ", answer);
            }
        }
        printf("\n");
    }
    return 0;
}
