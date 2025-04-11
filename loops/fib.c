#include<stdio.h>

int main()
{	int a=0,b=1,n,i;
	printf("enter no of times ");
	scanf("%d",&n);
	for(i=0;i<n/2;i++)
{
printf("%d\t %d\t",a,b);
a=a+b;
b=a+b;
}
}
