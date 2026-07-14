#include <stdio.h>
float average(int a, int b, int c)
{
    return (a + b + c) / 3.0;
}
int main()
{
    int a, b, c;
    float result;
    
    printf("Enter a: ");
    scanf("%d", &a);

    printf("\nEnter b: ");
    scanf("%d", &b);

    printf("\nEnter c: ");
    scanf("%d", &c);

    result = average(a ,b ,c);
    printf("The Average is %f", result);
    
    return 0;
}