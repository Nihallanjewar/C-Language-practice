#include <stdio.h>
int factorial(int n)
{
    int result = 1, i = n;
    while (i >= 1)
    {
        result = result * i;
        i--;
    }
    return result;
}
int main()
{
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);

    printf("The Factorial of the Number is %d", factorial(n));
    return 0;
}