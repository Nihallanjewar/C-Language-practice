/*
A Happy Number is a number which becomes 1 when we repeatedly
replace the number with the sum of the squares of its digits.
For example:
19 -> 1² + 9² = 82
82 -> 8² + 2² = 68
68 -> 6² + 8² = 100
100 -> 1² + 0² + 0² = 1
Therefore, 19 is a Happy Number.
If the process enters a repeating cycle without reaching 1,
the number is not a Happy Number.
*/
#include <stdio.h>
int Happy(int n)
{
    int digit, square, sum = 0;
    while (n != 1)
    {
        sum = 0;
        while (n != 0)
        {
            digit = n % 10;
            n = n / 10;
            square = digit * digit;
            sum = sum + square;
        }
        n = sum;
    }
    return sum;
}
int main()
{
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);

    if (Happy(n) == 1)
    {
        printf("It is a Happy Number!!\n");
    }
    else
    {
        printf("It is not Happy Number!!");
    }    
    return 0;
}