#include <stdio.h>
int armstrong(int n)
{
    int digit,cube, sum = 0;
    while (n != 0)
    {
        digit = n % 10;
        n = n / 10;
        cube = digit * digit * digit;
        sum = sum + cube;
    }
    return sum;
}
int main()
{
    int n, original;
    printf("Enter Number: ");
    scanf("%d", &n);

    original = n;
    
    if (armstrong(n) == original)
    {
        printf("It is an Armstrong Number!!");
    }
    else
    {
        printf("It is not an Armstrong Number!!");
    }
    return 0;
}