/*Get a two-digit number from user and make the one’s digit as 0,
then print it*/
/*Example: Input: 95 Output 90. Input: 18 Output: 10*/
#include<stdio.h>
int main ()
{
int x,y;
printf("Enter Two Digit Number : ");
scanf("%d",&x);
y = ((x/10)*10);
printf("Result = %d",y);
}
