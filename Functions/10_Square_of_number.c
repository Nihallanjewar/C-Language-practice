#include <stdio.h>
int square(int n)
{
    return n * n;
}
int main()
{
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);

    printf("The square of the numebr is %d", square(n));
    return 0;
}