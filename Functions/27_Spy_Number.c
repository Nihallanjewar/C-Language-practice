#include <stdio.h>
int sumofDigits(int n)
{
    int digit, sum = 0;
    while (n != 0)
    {
        digit = n % 10;
        n = n / 10;
        sum = sum + digit;
    }
    return sum;
}
int productofDigits(int n)
{
    int digit, product = 1;
    while (n != 0)
    {
        digit = n % 10;
        n = n / 10;
        product = product * digit;
    }
    return product;
}
int main()
{
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);
    if (sumofDigits(n) == productofDigits(n))
    {
        printf("It is a Spy Number!!");
    }
    else
    {
        printf("It is not a Spy Number!!");
    }
    return 0;
}