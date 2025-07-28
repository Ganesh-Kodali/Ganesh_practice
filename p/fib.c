#include<stdio.h>

int main()
{
	int c,n,a=0,b=1;
	printf("enter no of times u want to run fib series\n");
	scanf("%d",&n);

	printf("%d\t",a);
	printf("%d\t",b);

	for(int i=1;i<=n-2;i++)
	{
		c=a+b;
		printf("%d\t",c);
		a=b;
		b=c;
	}
}
