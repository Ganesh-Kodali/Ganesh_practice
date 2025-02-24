#include<stdio.h>

int main()
{       
	int num,n,bitstatus;

	printf("enter the number\n");
	scanf("%d",&num);

	printf("enter the nth bit \n");
	scanf("%d",&n);

	bitstatus= (num>>n)&1;

	printf("bit status of %d bit of the number is %d",n,bitstatus);
}
