#include <stdio.h>
int main()
{
    char ch;
    printf("Enter charecter: ");
    scanf(" %c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        printf("It is a vowel");
    else if (ch > 'a' && ch <= 'z')
        printf("It is an alphabet in lowercase");
    else if (ch > 'A' && ch <= 'Z')
        printf("It is an alphabet in uppercase");
    else if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
        printf("It is an operator");
    else if (ch >= '0' && ch <= '9')
        printf("It is number");
    return 0;
}