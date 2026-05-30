#include <stdio.h>
int main()
{
    int n, i = 0;
    while (i <= 10)
    {
        n = 2 * i;
        printf("2 * %d= %d\n", i, n);
        i = i + 1;
    }
    return 0;
}