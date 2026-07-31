#include <stdio.h>
int sumofDigits(int x)
{
    int digit, sum = 0;
    while (x != 0)
    {
        digit = x % 10;
        x = x / 10;
        sum = sum + digit;
    }
    return sum;
}
int main()
{
    int x;
    printf("Enter Number: ");
    scanf("%d", &x);
    if (x % sumofDigits(x) == 0)
    {
        printf("It is a Harshad Number!!");
    }
    else
    {
        printf("It is not a Harshad Number!!");
    }
    return 0;
}