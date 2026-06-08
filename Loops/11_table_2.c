#include <stdio.h>
int main()
{
    int no, i = 0, n;
    printf("Enter number: ");
    scanf("%d", &no);
    for (i = 0; i <= 10; i++)
    {
        n = no * i;
        printf("%d * %d = %d\n", no, i, n);
    }
    return 0;
}