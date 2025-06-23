#include<stdio.h>
int main()
{
int a,i;
printf("enter the number\n");
scanf("%d",&a);
for(i=2;i<=a/2;i++)
{
if(a%i==0)
{printf("number is not prime number\n");
break;
}
}
if(i>a/2)
printf("number is prime");
}
