#include<stdio.h>
int main()
{
int n;
printf("enter the number\n");
scanf("%d",&n);
if((n%5==0)&&(n%11==0))
{
printf("the number is divisible by both 5 and 11\n");

}
else 
{
printf("the number is not divisible by both 5 and 11\n");
}
}
