#include<stdio.h>

int main()
{


	int n,count=0;
	printf("enter number\n");
	scanf("%d",&n);
	int temp=n;
	while(temp>0)
	{
	if(temp&1)
	{	
		count ++;

	}
	temp>>=1;
	}
	if(n>0&&count==1)
	{
	printf("power of 2\n");

	}
	else
	{
	printf("not a power of 2\n");
	}
}
