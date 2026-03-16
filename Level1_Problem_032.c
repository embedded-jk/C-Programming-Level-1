/*Question: Get two 2-digit numbers from user. If the sum of the numbers is less than 100, then print the sum, 
otherwise print the difference.
Example: Input: 56 78 – Output: 22
Input: 14 65 - Output: 79*/

#include<stdio.h>
int main ()
{
int x,y ,sum;
printf("Enter two 2-digit Numbers : ");
scanf("%d %d",&x,&y);
sum = x+y;
if(sum<100)
printf("%d",sum);
else if(x>y)
printf("%d",x-y);
else
printf("%d",y-x);

}
