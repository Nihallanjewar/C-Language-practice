#include <stdio.h>
int main()
{
    int no, reverse = 0, digit, original;
    printf("Enter number: ");
    scanf("%d", &no);

    original = no;

    while (no != 0)
    {
        digit = no % 10;
        no = no / 10;
        reverse = reverse * 10 + digit;
    }
    if (reverse == original)
    {
        printf("It is a Palindrome Number!!");
    }
    else
    {
        printf("It is not a Palindrome Number!!");
    }
    return 0;
}