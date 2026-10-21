#include <stdio.h>
int main()
{
    int arr[] = {2, 5, 2, 7, 2, 9};
    int n = 6, i, count1 = 0, count2 = 0, count3 = 0;
    int target1 = 2, target2 = 5, target3 = 7;

    for (i = 0; i < n; i++)
    {
        if (arr[i] == target1)
        {
            count1++;
        }
        if (arr[i] == target2)
        {
            count2++;
        }
        if (arr[i] == target3)
        {
            count3++;
        }
    }

    printf("Occurrences of 2 = %d\n", count1); 
    printf("Occurrences of 5 = %d\n", count2); 
    printf("Occurrences of 7 = %d", count3); 
    return 0;
}