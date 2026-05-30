#include <stdio.h>
int main()
{
    int radius;
    printf("Enter Radius\n: ");
    scanf("%d", &radius);
    float area, a = 3.14;
    area = a * radius * radius;
    printf("Area of the circle = %f", area);
    return 0;
}