#include<stdio.h>
int main()
{
int n;
printf("enter the number");
scanf("%d",&n);
if((n&(n-1))==0)
{
	printf("the number is power of 2:%d",n);
}}
