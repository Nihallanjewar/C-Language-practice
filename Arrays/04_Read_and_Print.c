#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n], i;

    for (i = 0; i <= (n - 1); i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Elemets stored in the array are: ");
    for (i = 0; i <= (n - 1); i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}