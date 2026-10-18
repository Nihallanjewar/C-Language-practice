#include <stdio.h>
int main()
{
    int i, sum = 0;
    float average;
    int arr[5] = {20, 38, 25, 60, 91};
    for (i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }

    printf("Sum of the elements = %d", sum);

    average = sum / 5.0;
    printf("\nAverage of the elements = %.2f", average);
    return 0;
}