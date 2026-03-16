#include<stdio.h>
int main ()
{
int x,y;
printf("Enter Three Digit Number : ");
scanf("%d",&x);
y = x/10;
y= y%10; 
printf("Result = %d",y);
}
