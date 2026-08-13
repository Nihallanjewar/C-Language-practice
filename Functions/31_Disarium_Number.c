#include <stdio.h>
#include <math.h>
int countOfDigits(int n)
{
    int digit, count = 0;
    while (n != 0)
    {
        digit = n % 10;
        n = n / 10;
        count++;
    }
    return count;
}
int Power(int x)
{
    int power, digit, sum = 0;
    power = countOfDigits(x);
    while (power != 0)
    {
        digit = x % 10;
        x = x / 10;
        sum = sum + pow(digit, power);
        power--;
    }
    return sum;
}
int main()
{
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);

    if (Power(n) == n)
    {
        printf("It is a Disarium Number!!");
    }
    else
    {
        printf("It is not a Disarium Number!!");
    }
    return 0;
}