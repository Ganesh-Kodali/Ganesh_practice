#include<stdio.h>

int main()
{
printf("enter 3 numbers\n");
int a,b,c;
scanf("%d%d%d",&a,&b,&c);

if(a>=b && a>=c)
{
	printf("a is greater\n");
}
else if(b>=c && b>=a)
	printf("b is greater\n");
	else 
	printf("c is greater\n");
}
