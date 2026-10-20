#include <stdio.h>
int main()
{
    int n;
    printf("Size of the array: ");
    scanf("%d", &n);

    int i, arr[n], even_count = 0, odd_count = 0;
    printf("Enter Elements:\n");
    for (i = 0; i <= (n - 1); i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

   for (i = 0; i <= (n - 1); i++)
    {
        printf("%d ", arr[i]);
        if (i % 2 == 0)
        {
            even_count++;
        }
        else
        if (i % 2 != 0)
        {
            odd_count++;
        }
    }

    printf("Total even elements: %d\n", even_count);
    printf("Total odd elements: %d", odd_count);
    
    return 0;
}