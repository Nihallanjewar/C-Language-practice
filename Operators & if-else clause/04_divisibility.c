#include <stdio.h>
int main()
{
    int no_1, no_2 = 7;
    printf("Enter no_1: ");
    scanf("%d", &no_1);
    int c = no_1 % no_2;
    if (c == 0)
        printf("No_1 is dividible by No_2");
    else
        printf("Not divisible by No_2");
    return 0;
}