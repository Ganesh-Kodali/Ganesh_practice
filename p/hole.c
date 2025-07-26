#include<stdio.h>

int main()
{

	int i,j,k,n;

	printf("enter the no of rows\n");

	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		for(k=1;k<=n-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			if(i==n||j==1||j==i)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}
}
