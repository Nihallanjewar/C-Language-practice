#include <stdio.h>
int main()
{
    int arr[] = {5, 6, 7, 5, 2, 5, 1, 0};
    int target = 5, count = 0, i, n = 8;

    for (i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            count++;
        }
        
    }
    printf("Occurreneces = %d", count);

    return 0;
}