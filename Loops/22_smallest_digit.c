#include <stdio.h>
int main()
{
    int number, remainder, smallest = 10, digit;
    printf("Enter Number: ");
    scanf("%d", &number);
    remainder = number % 2;
    if (remainder == 0)
    {
        printf("It is an even Number!!");
    }
    else
        printf("It is an odd Number!!");

    while (number != 0)
    {
        digit = number % 10;
        number = number / 10;
        if (digit < smallest)
        {
            smallest = digit;
        }
    }
    printf("\nThe lowest digit is %d", smallest);
    return 0;
}
