#include <stdio.h>
int main()
{
    int number, digit, remainder, largest = 0;

    printf("Enter Number:");
    scanf("%d", &number);

    remainder = number % 2;

    if (remainder == 0)
    {
        printf("The Input Number is Even!!");
    }
    else
        printf("\nInput Number is Odd!!");

    while (number != 0)
    {
        digit = number % 10;
        number = number / 10;
        if (digit > largest)
        {
            largest = digit;
        }
    }
    printf("\nThe largest digit is %d", largest);
    return 0;
}