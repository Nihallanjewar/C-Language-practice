#include <stdio.h>
#include <math.h>
int main()
{
    float side_1, side_2, side_3;
    printf("Enter side_1: \n");
    scanf("%f", &side_1);

    printf("Enter side_2: \n");
    scanf("%f", &side_2);

    printf("Enter side_3: \n");
    scanf("%f", &side_3);

    float s;
    s = (side_1 + side_2 + side_3) / 2.0;

    printf("semi perimeter = %f\n", s);

    float area;
    area = sqrt(s * (s - side_1) * (s - side_2) * (s - side_3));

    printf("Area = %f", area);
    return 0;
}