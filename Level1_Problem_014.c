#include<stdio.h>
int main ()
{
int x,y;
printf("Enter Three Digit Number : ");
scanf("%d",&x);
y = (x/100)+((x%10)*100)+(((x/10)%10)*10);
printf("Result = %d",y);
}
