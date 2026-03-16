/*Question: Get two 3-digit numbers from user. Print the difference between the one’s digit and hundred’s 
digit of the number whose ten’s digit is bigger than the other number’s ten’s digit
Example: Input: 856 978 – Output: 1
Input: 128 365 - Output: 2*/

#include<stdio.h>
int main ()
{
int x,y;
printf("Enter two 3-digit Numbers : ");
scanf("%d %d",&x,&y);
if(((x/10)%10)<((y/10)%10))
{
    if(y%10>y/100)
    {
printf("%d",y%10 - y/100);
    }
    else
printf("%d",y/100 - y%10);
}
else
{
    if(x%10>x/100)
    {
printf("%d",x%10 - x/100);
    }
    else
printf("%d",x/100 - x%10);
}
}
