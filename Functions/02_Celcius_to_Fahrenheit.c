#include <stdio.h>
float celsius(float C)
{
    return (((9.0 / 5.0) * C) + 32);
}
int main()
{
   float C, F;
   printf("Enter Temperature (in C): ");
   scanf("%f", &C);

   F = celsius(C);
   printf("Temperature in Fahrenheit is %f", F);
    return 0;
}