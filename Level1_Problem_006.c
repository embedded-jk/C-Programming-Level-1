#include<stdio.h>
int main ()
{
int x,y;
printf("Enter Number : ");
scanf("%d",&x);
y = x%10; // Gives reminder that is unit digit
printf("Result = %d",y);
}
