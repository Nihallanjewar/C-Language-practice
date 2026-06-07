#include <stdio.h>
int main()
{
    int number, digit, even_digit = 0, odd_digit = 0;
    printf("Enter Number: ");
    scanf("%d", &number);

    if (number % 2 == 0)
    {
        printf("The number is Even!!");
    }
    else
        printf("The Number is Odd!!");
    while (number != 0)
    {
        digit = number % 10;
        number = number / 10;
        if (digit % 2)
        {
            odd_digit = odd_digit + digit;
        }
        else
        {
            even_digit = even_digit + digit;
        }
    }
    printf("\nSum of odd digits  = %d", odd_digit);
    printf("\nSum of even digits = %d", even_digit);
    return 0;
}
