#include <stdio.h>
int fibonacci(int n)
{
    int first = 0;
    int second = 1;
    int next, i;
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    
    for (i = 0; i <= n - 2; i++)
    {
        next = first + second;
        first = second;
        second = next;
    }
    return next;
}
int main()
{
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);

    printf("%d", fibonacci(n));
    return 0;
}