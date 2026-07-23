#include <stdio.h>
int palindrome(int n)
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
    int n, original;
    printf("Enter Number: ");
    scanf("%d", &n);

    original = n;

    if (palindrome(n) == original)
    {
        printf("It is a Palindrome Number!!");
    }
    else
    {
        printf("It is not a Palindrome Number!!");
    }
    return 0;
}