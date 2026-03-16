/*Question: Get a three-digit number from user and make the one’s digit as 2,
then print it.
Example: Input: 695 Output 692. Input: 182 Output: 182*/

#include<stdio.h>
int main ()
{
int x,y;
printf("Enter Three Digit Number : ");
scanf("%d",&x);
y = 2 + ((x/100)*100) + ((x/10)%10)*10;
printf("Result = %d",y);
}
