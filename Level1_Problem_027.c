/*Question: Get a three-digit number from user. If the sum of the digits is 10 then print “Success”, otherwise print “Failure”.
Example: Input: 956 - Output Failure. Input: 127 - Output: Success.*/

#include<stdio.h>
int main ()
{
int x;
printf("Enter three digit Number : ");
scanf("%d",&x);
if(((x%10)+(x/100)+((x/10)%10))==10)
printf("Success");
else
printf("Failure");
}
