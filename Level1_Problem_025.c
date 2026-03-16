/*Question: Get a four-digit number from user and subtract 5 from that number if ten’s digit position and 100’s digit position is same, then print the result. Do not use “if”.
Example: Input: 7595 Output 7595. Input: 3772 Output: 3767*/

#include<stdio.h>
int main ()
{
int x,y;
printf("Enter four digit Number : ");
scanf("%d",&x);
(((x/10)%10)-((x/100)%10))?printf("%d",x):printf("%d",x-5);
}
