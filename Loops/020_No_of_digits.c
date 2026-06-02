#include <stdio.h>
int main()
{
    int no, digit, count = 0;
    printf("Enter Number :");
    scanf("%d", &no);

    while (no != 0)
    {
        digit = no % 10;
        no = no / 10;
        count++;
    }
    printf("The number of digits are %d", count);
    scanf("%d", &count);
    return 0;
}
