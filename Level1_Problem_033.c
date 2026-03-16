/*Question: Get two 2-digit numbers from user. Print the sum of digits of the biggest number.
Example: Input: 56 78 – Output: 15
Input: 14 65 - Output: 11*/

#include<stdio.h>
int main ()
{
int x,y;
printf("Enter two 2-digit Numbers : ");
scanf("%d %d",&x,&y);
if(x<y)
{
printf("%d",y/10 + y%10);
}
else 
printf("%d",x/10 + x%10);
}
