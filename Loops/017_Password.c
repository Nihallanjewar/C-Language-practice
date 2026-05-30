#include <stdio.h>
int main()
{
    int secret = 2356, password;
    printf("Enetr the password: ");
    scanf("%d", &password);
    while (password != secret)
    {
        printf("Wrong Password!!");
        printf("\nEnter password again: ");
        scanf("%d", &password);
    }
    printf("Access Granted!!");
    return 0;
}