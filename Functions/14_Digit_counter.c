#include <stdio.h>
int countDigit(int n)
{
    int count = 0, digit;
    while (n != 0)
    {
        digit = n % 10;
        n = n / 10;
        count++;
    }
    return count;
}
int main()
{
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);

    printf("Number of digits are %d", countDigit(n));
    return 0;
}