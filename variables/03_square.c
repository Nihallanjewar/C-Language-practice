#include<stdio.h>
int main(){
   int area , side;
   printf("Enter side: ");
   scanf("%d", &side);
   area = side * side;
   printf("Area of the square = %d", area);
   return 0;
}