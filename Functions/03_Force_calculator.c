#include <stdio.h>
float force(float mass, float g)
{
    return (mass * g);
}
int main()
{
    float mass, g = 9.8, Force;
    printf("Enter Mass: ");
    scanf("%f", &mass);

    Force = force(mass, g);
    printf("The Force acting upon the body is %f", Force);
    return 0;
}