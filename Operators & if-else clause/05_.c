#include <stdio.h>
int main()
{
    char ch;
    printf("Enter charecter: ");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z')
        printf("It is in lowercase", ch);
    else
        printf("It is in Uppercase", ch);
    return 0;
}