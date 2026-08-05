#include <stdio.h>
#include <math.h>
int noOfDigits(int n)
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
int Divisor(int x)
{
    int half, divisor;
    half = noOfDigits(x) / 2;
    divisor = (int)(pow(10, half) + 0.5);
    /*Always check for Floating-point precision
    In the line divisor = (int)(pow(10 ,half) + 0.5); we add 0.5 because-
    When C converts a double to an int, it does not round.
    It simply removes the decimal part (this is called truncation).*/
    return divisor;
}
int Tech(int y)
{
    int firstHalf, secondHalf, sum = 0;

    if (noOfDigits(y) % 2 != 0)
    {
        return 0;
    }
    firstHalf = y / Divisor(y);
    secondHalf = y % Divisor(y);

    sum = firstHalf + secondHalf;
    return sum * sum;
}
int main()
{
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);
    int original = n;
    if (Tech(n) == original)
    {
        printf("It is a Tech Number!!");
    }
    else
    {
        printf("It is not a Tech Number!!");
    }
    return 0;
}