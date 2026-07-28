#include <stdio.h>
int perfect(int n)
{
    int i, sum = 0;
    for (i = 1; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    return sum;
}
int main()
{
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);

    if (perfect(n) == n)
    {
        printf("It is a Perfect Number!!");
    }
    else
    {
        printf("It is not a Perfect Number!!");
    }
    return 0;
}