/*Question: Get a three-digit number from user and subtract 5 from that number if one’s digit number and
 100’s digit number are same, then print the result. Do not use “if”.
Example: Input: 595 Output 590. Input: 372 Output: 372*/

#include<stdio.h>
int main ()
{
int x,y;
printf("Enter three digit Number : ");
scanf("%d",&x);
(((x%10)-(x/100)))?printf("%d",x):printf("%d",x-5);
}
