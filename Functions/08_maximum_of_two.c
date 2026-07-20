#include <stdio.h>
int maximum(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    if (b > a)
    {
        return b;
    }
}
int main()
{
    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    printf("The maximum is %d", maximum(a , b));
    return 0;
}