#include <stdio.h>
int main()
{
    int i, result = 0, no;
    printf("Enter Number: ");
    scanf("%d", &no);
    for (i = no; i >= 1; i--)
    {
        result = result + i;
    }
    printf("%d\n", result);
    return 0;
}
 