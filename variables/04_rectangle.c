#include <stdio.h>
int main()
{
    int area, length, bredth;
    printf("Enter Length: ");
    scanf("%d", &length);
    printf("Enter Bredth: ");
    scanf("%d", &bredth);
    area = length * bredth;
    printf("Area of the Rectrangle = %d", area);
    return 0;
}