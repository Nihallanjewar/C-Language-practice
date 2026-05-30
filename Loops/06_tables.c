#include <stdio.h>
int main()
{
    int i = 0, n;
    do
    {
        n = 4 * i;
        printf("4 * %d = %d\n", i, n);
        i++;
    } while (i <= 10);
    return 0;
}