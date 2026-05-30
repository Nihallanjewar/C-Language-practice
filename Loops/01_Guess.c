#include <stdio.h>
int main()
{
    int guess, secret = 30;

    do
    {
        (printf("\nEnter guess: "));
        scanf("%d", &guess);
        if (guess > secret)
            printf("Lower your guess!");
        else if (guess < secret)
            printf("Higher your guess!");
        else if (guess = secret)
            printf("Got it,you win!!");
    } while (guess != secret);
    return 0;
}