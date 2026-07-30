/*Accidently learnt FUNCTION COMPOSITION (30th July 2026)*/
#include <stdio.h>
int Square(int x)
{
    int square;
    square = x * x;
    return square;
}
int sumofDigits(int n)
{
    int sum = 0, digit;
    while (n != 0)
    {
        digit = n % 10;
        n = n / 10;
        sum = sum + digit;
    }
    return sum;
}
int main()
{
    int x;
    printf("Enter Number: ");
    scanf("%d", &x);

    if (sumofDigits(Square(x)) == x)
    {
        printf("It is a Neon Number!!");
    }
    else
    {
        printf("It is not a Neon Number");
    }
    return 0;
}