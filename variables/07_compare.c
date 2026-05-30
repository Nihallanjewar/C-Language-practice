#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter a\n: ");
    scanf("%d", &a);

    printf("Enter b\n: ");
    scanf("%d", &b);

    printf("Enter c\n: ");
    scanf("%d", &c);

    if (a > b && c)
        printf("a is greater than b & c");
    else if (b > a && c)
        printf("b is greater than a & c");
    else if (c > a && b)
        printf("c is greater than a & b");
    else if (a = b = c)
        printf("All the numbers are equal");
    return 0;
}