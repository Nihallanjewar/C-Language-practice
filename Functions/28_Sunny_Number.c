#include <stdio.h>
#include <math.h>
int Sunny(int n)
{
    int squareRoot;
    squareRoot = sqrt(n + 1);
    return squareRoot;
}
int main()
{
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);
    if (Sunny(n) * Sunny(n) == n + 1)
    {
        printf("It is a Sunny Number!!");
    }
    else
    {
        printf("It is not a Sunny Number!!");
    }
    return 0;
}