#include <stdio.h>
int minimum(int x, int y)
{
    if (x > y)
    {
        return y;
    }
        return x;
}
int gcd(int x, int y)
{
    int i;
    int smaller = minimum(x, y);
    for (i = smaller; i >= 1; i--)
    {
        if (x % i == 0 && y % i == 0)
        {
            return i;
        }
    }
}
int lcm(int x, int y)
{
    int Lcm;
    Lcm = (x * y) / gcd(x,y);
    return Lcm;    
}
int main()
{
    int x, y, LCM;
    printf("Enter x: ");
    scanf("%d", &x);

    printf("Enter y: ");
    scanf("%d", &y);

    printf("LCM = %d", lcm(x,y));
    return 0;
}