#include<stdio.h>

int main()
{
printf("enter the number\n");
int n;
scanf("%d",&n);

if(n&1)
	printf("lsb is set\n");
else
	printf("lsb is not set\n");
}
