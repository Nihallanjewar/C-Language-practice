#include <stdio.h>
int Duck(int n)
{
    int flag = 0, digit;
    while (n != 0)
    {
        digit = n % 10;
        n = n / 10;
        if (digit == 0)
        {
            flag = 1;
        }
    }
   return flag; 
}
int main()
{
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);

    if (Duck(n) == 1)
    {
        printf("It is a Duck number!!");
    }
    else 
    {
        printf("It is not a Duck number!!");
    }
    return 0;
}