#include <stdio.h>
int factorial(int n)
{
    int fact = 1, i = n;
while (i >= 1)
{
    fact = fact * i;
    i--;
}
return fact;
}
int strong(int x)
{
    int digit, sum = 0;
    while (x != 0)
    {
       digit = x % 10;
       x = x / 10; 
       sum = sum + factorial(digit);
    }
    return sum;
}
int main()
{
    int x;
    printf("Enter Number: ");
    scanf("%d", &x);
    if (strong(x) == x)
    {
        printf("It is a Strong Number!!");
    }
    else
    {
        printf("It is not a Strong Number!!");
    }
    return 0;
}