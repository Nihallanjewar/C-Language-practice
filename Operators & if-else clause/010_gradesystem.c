#include <stdio.h>
int main()
{
    float percentage, maths, physics, chemistry, Total;
    char grade;
    printf("Enter marks for Maths: ");
    scanf("%f", &maths);

    printf("Enter marks for Chemistry: ");
    scanf("%f", &chemistry);

    printf("Enter marks for Physics: ");
    scanf("%f", &physics);

    Total = maths + physics + chemistry;
    printf("Total = %f\n", Total);

    percentage = (Total / 300) * 100;
    printf("Percentage = %f", percentage);

    if (percentage >= 90 && percentage <= 100)
    {
        grade = 'A';
    }
    else if (percentage >= 75)
    {
        grade = 'B';
    }
    else if (percentage >= 60)
    {
        grade = 'C';
    }
    else if (percentage >= 40)
    {
        grade = 'D';
    }
    else
    {
        printf("Fail");
    }
    printf("\ngrade = %c", grade);
    return 0;
}