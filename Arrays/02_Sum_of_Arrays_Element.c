#include <stdio.h>
int main()
{
    int n[5], sum = 0, i = 0;
    for (i = 0; i < 5; i++)
    {
        printf("Enter n %d: ", i + 1);
        scanf("%d", &n[i]);
        sum = sum + n[i];
    }

    printf("Sum of Array element is %d\n", sum);

    return 0;
}