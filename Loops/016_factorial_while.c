#include <stdio.h>
int main()
{
    int n, i, result = 1;
    printf("Enter Number: ");
    scanf("%d", &n);
    i = n;
    while (i >= 1)
    {
        result = result * i;
        i = i - 1;
    }
    printf("%d\n", result);
    return 0;
}
//i depends on n & n is only valid after input.