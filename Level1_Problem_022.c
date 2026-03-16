/*Question: Get a number from user and subtract 5 from that number if the number’s ten’s position digit is odd, then print the result. Do not use “if”.
Example: Input: 685 Output 685. Input: 89172 Output: 89167*/

#include<stdio.h>
int main ()
{
int x,y;
printf("Enter a Number : ");
scanf("%d",&x);
(((x%100)/10)%2)?printf("%d",x-5):printf("%d",x);
}
