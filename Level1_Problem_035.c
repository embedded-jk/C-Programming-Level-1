/*Question: Get two 3-digit numbers from user. Add the one’s and hundred’s digits of both the numbers. 
Print the sum of all the digits of the number whose sum of one’s and hundred’s digits is bigger.
Example: Input: 856 978 – Output: 24
Input: 128 365 - Output: 11*/

#include<stdio.h>
int main ()
{
int x,y;
printf("Enter two 3-digit Numbers : ");
scanf("%d %d",&x,&y);
if( (x%10 +x/100)<(y%10 +y/100))
{
printf("%d",((y%10)+((y/10)%10)+(y/100)));
}

else
{
printf("%d",((x%10)+((x/10)%10)+(x/100)));
}
}