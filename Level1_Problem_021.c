/*Question: Get a number from user and subtract 5 from that number if the number is odd, then print the result. Do not use “if”.
Example: Input: 695 Output 690. Input: 182 Output: 182*/

#include<stdio.h>
int main ()
{
int x,y;
printf("Enter Three Digit Number : ");
scanf("%d",&x);
(x%2)?printf("%d",x-5):printf("%d",x);
}
