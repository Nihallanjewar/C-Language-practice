#include <stdio.h>
int even_odd(int a)
{
    if (a % 2 == 0)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int a;
    printf("Enter a: ");
    scanf("%d", &a);

    if (even_odd(a) == 1)
    {
        printf("The Number is Even!!");
    }
    if (even_odd(a) == 0)
    {
        printf("The Number is Odd!!");
    }
    return 0;
}