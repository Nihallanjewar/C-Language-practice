#include <stdio.h>
int main()
{
    int number, remainder, product = 1, digit;
    printf("Enter Number: ");
    scanf("%d", &number);

    remainder = number % 2;
    if (remainder == 0)
    {
        printf("The Number is Even!!");
    }
    else
        printf("The Numebr is Odd!!");

    while (number != 0)
    {
        digit = number % 10;
        number = number / 10;
        product = product * digit;
    }
    printf("\nProduct of digits is %d", product);
    return 0;
}
