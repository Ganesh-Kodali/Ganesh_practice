#include<stdio.h>

int max(int a, int b, int c)
{
if(a>=b && a>=c)
	return a;
else if(b>=c && b>=a)
	return b;
else
	return c;
}

int main()
{
printf("enter the 3 numbers\n");

int a,b,c;

scanf("%d%d%d",&a,&b,&c);

printf("max of 3 is %d",max(a,b,c));
}
