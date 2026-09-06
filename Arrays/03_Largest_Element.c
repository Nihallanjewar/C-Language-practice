#include <stdio.h>
int main()
{
    int n[5], i = 0;
    for (i = 0; i < 5; i++)
    {
        printf("Enter n %d: ", i + 1);
        scanf("%d", &n[i]);
    }

    int largest = n[0];
    
    for (i = 1; i < 5; i++)
    {
        if (n[i] > largest)
        {
            largest = n[i];
        }
    }
    printf("%d is the largest!!", n[i]);
    return 0;
}