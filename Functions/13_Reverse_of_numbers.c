#include <stdio.h>
int Reverse(int n)
{
    int reverse = 0, digit;
    while (n != 0)
    {
        digit = n % 10;
        n = n / 10;
        reverse = 10 * reverse + digit; 
    }
    return reverse;
}
int main()
{
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);

    printf("The Reverse of the numebr is %d", Reverse(n));
    return 0;
}