#include <stdio.h>
int main()
{
    float no_1, no_2, result;
    char op;
    printf("Enter no_1: ");
    scanf("%f", &no_1);

    printf("Enter no_2: ");
    scanf("%f", &no_2);

    printf("Enter Operator (+ , - , * , /): ");
    scanf(" %c", &op);

    if (op == '+')
        result = no_1 + no_2;
    else if (op == '-')
        result = no_1 - no_2;
    else if (op == '*')
        result = no_1 * no_2;
    else if (op == '/')
        result = no_1 / no_2;
    else
    {
        printf("Invalid operator \n");
    }

    printf("Result = %.2f", result);
    return 0;
}