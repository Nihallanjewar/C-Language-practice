#include <stdio.h>
int power(int base, int exponent)
{
    int result  = 1, i;
    for (i = 1; i <= exponent; i++)
    {
        result = result * base;
    }
    return result;
}
int main()
{
    int base, exponent;
    printf("Enter Base: ");
    scanf("%d", &base);

    printf("Enter Exponent: ");
    scanf("%d", &exponent);

    printf("The answer is %d", power(base, exponent));
    return 0;
}