#include <stdio.h>
int main()
{
    int i = 0;
    while (i < 10)
    {
        printf("My Name is Nihal Lanjewar\n");
        i = i + 1;
        // WHAT EXACTLY IS HAPPENING WHEN TEH CODE RUNS!!!!!
       //  Made variable i=0 ; while i = 0; while i < 10 condition check hogi whether true or false;
       // If non zero i.e true => block of code runs
       // And iteration occurs; similar thing happens till i < 10 as soon i =10  
       // It would turn 0 i.e false =>block of code doesnot run
    }
    return 0;
}