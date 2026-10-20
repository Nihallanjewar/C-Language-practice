#include <stdio.h>
int main()
{
    int n;
    printf("Enter size of the array:\n");

    printf("Enter size: ");
    scanf("%d", &n);

    int i, arr[n], Original, Reverse;
    printf("Enter Elements of the Array:\n");
    for (i = 0; i <= (n - 1); i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Original Array:-\n");
    for (i = 0; i <= (n - 1); i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    printf("Reverse Array:-\n");
    for (i = (n - 1); i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}