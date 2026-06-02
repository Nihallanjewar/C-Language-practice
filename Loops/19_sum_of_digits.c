#include <stdio.h>
int main()
{
    int no, digit, sum = 0;
    printf("Enter Number: ");
    scanf("%d", &no);

    while (no != 0)
    {
        digit = no % 10;
        no = no / 10;
        sum = sum + digit;
    }
    printf("Sum of digits = %d", sum);
    return 0;
}