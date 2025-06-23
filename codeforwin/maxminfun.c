#include<stdio.h>

int maxmin(int a, int b)
{
if (a>b)
	return a;
else 
	return b;
}
int main()
{

int a,b;
printf("enter the 2 numbers to compare\n");
scanf("%d %d",&a,&b);
printf("the bigger number is %d",maxmin(a,b));
}
