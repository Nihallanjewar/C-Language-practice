// ALways make the numbers greater than the each number for comparison so as to find the greatest one!!
#include <stdio.h>
int main()
{
    int a, b, c, x;
    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    printf("Enter c: ");
    scanf("%d", &c);

    printf("Enter x: ");
    scanf("%d", &x);

    if (a > b && a > c && a > x)
        printf("a is greater", a);
    else if (b > a && b > c && b > x)
        printf("b is greater", b);
    else if (c > a && c > b && c > x)
        printf("c is greater", c);
    else if (x > a && x > b && x > c)
        printf("x is greater", x);
    return 0;
}

