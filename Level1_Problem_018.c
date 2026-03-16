/*Question: Get a two-digit number from user and make the ten’s digit 1,
then print it.
Example: Input: 95 Output 15. Input: 82 Output: 12*/

#include<stdio.h>
int main ()
{
int x,y;
printf("Enter Two Digit Number : ");
scanf("%d",&x);
y = 10 + (x%10);
printf("Result = %d",y);
}
