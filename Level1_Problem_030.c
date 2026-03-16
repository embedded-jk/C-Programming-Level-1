/*Question: Get a four-digit number from user. If the sum of the ten’s digit and hundred’s digit is equal to 10, 
and one of the digits is more than 7 then print “Success”, otherwise print “Failure”.
Example: Input: 4649 – Output: Failure. Input: 9286 - Output: Success.*/

#include<stdio.h>
int main ()
{
int x;
printf("Enter four digit Number : ");
scanf("%d",&x);
if(((((x/10)%10)+((x/100)%10))==10)&&(((x/10)%10)>7)||(((x/100)%10)>7))
printf("Success");
else
printf("Failure");
}
