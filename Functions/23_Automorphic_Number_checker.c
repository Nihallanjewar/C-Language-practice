#include <stdio.h>
int digitcounter(int n)
{
    int count = 0, digit;
    while (n != 0)
    {
        digit = n % 10;
        n = n / 10;
        count++;
    }
    return count;
}
int Divisor(int x)
{
    int i = 0, divisor = 1, digit;
    digit = digitcounter(x);
    while (i < digit)
    {
        divisor = divisor * 10;
        i++;
    }
    return divisor;
}
int automorphic(int n)
{
    int square, remainder;
    square = n * n;
    remainder = square % Divisor(n);
    return remainder;
}
int main()
{
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);
    if (automorphic(n) == n)
    {
        printf("The Number is Automorphic!!");
    }
    else
    {
        printf("The Number is not Automorphic!!");
    }
    return 0;
}