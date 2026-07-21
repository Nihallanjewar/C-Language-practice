#include <stdio.h>
int cube(int n)
{
    return n * n * n;
}
int main()
{
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);

    printf("The cube of the number is %d", cube(n));
    return 0;
}