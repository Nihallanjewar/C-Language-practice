#include <stdio.h>
int Prime(int n)
{
    int i;
    for (i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);

    if (Prime(n) == 1)
    {
        printf("The Number is Prime!!");
    }
    else
    {
        printf("The Number is not Prime!!");
    }
    return 0;
}