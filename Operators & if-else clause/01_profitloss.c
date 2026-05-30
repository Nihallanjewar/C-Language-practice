#include <stdio.h>
int main()
{
    float Profit, Loss, SP, CP;
    printf("Enter SP: ");
    scanf("%f", &SP);
    printf("Enter CP: ");
    scanf("%f", &CP);

    if (SP > CP)
        printf("PROFIT", SP);
    else if (CP > SP)
        printf("LOSS", CP);
    else if (SP = CP)
        printf("NO PROFIT NOR LOSS");
    return 0;
}