#include <stdio.h>
int main()
{
    char ch;
    printf("Enter charecter: ");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z')
        printf("Entered charecter is in lowercase", ch);
    else
        printf("Entered charecter is in uppercase");
    return 0;
}