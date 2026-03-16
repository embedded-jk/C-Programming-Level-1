#include<stdio.h>
int main ()
{
int x,y;
printf("Enter Three Digit Number : ");
scanf("%d",&x);
y = x/100; // Gives reminder that is one's digit
printf("Result = %d",y);
}
