#include<stdio.h>
int main()
{
int n;
printf("enter the number\n");
scanf("%d",&n);

if((n&1)==1)
{
printf("the given number is odd\n");
}
else {
	printf("the given number is even\n");
}
}
