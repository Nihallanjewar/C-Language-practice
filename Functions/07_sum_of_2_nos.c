#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}
int main()
{
    int a, b, result;
    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    result = sum(a , b);
    printf("The sum is %d", result);
    return 0;
}