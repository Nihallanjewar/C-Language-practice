#include <stdio.h>
int factorial(int n)
{
    int fact = 1, i;
    for (i = n; i >= 1; i--)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);
    
    printf("%d", factorial(n));
    return 0;
}
