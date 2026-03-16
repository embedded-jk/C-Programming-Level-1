/*Question: Get a four-digit number from user. If the sum of the ten’s digit and hundred’s digit is greater than 10,
 then print “Success”, otherwise print “Failure”.
Example: Input: 7529 – Output: Failure. Input: 9386 - Output: Success.*/

#include<stdio.h>
int main ()
{
int x;
printf("Enter four digit Number : ");
scanf("%d",&x);
if(((x/10)%10)+((x/100)%10)>10)
printf("Success");
else
printf("Failure");
}
