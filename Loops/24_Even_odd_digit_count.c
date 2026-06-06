#include <stdio.h>
int main()
{
    int digit, number, even_digit = 0, odd_digit = 0;
    printf("Enter Number: ");
    scanf("%d", &number);

    if (number % 2 == 0)
    {
        printf("\nThe Number is Even!");
    }
    else
    {
        printf("\nThe Number is Odd!");
    }

    while (number != 0)
    {
        digit = number % 10;
        number = number / 10;
        if (digit % 2)
        {
            odd_digit++;
        }
        else
        {
            even_digit++;
        }
    }
    printf("\nThe Number of odd digits = %d", odd_digit);
    printf("\nThe Number of even digits = %d", even_digit);
    return 0;
}