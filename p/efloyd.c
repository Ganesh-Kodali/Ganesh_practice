#include<stdio.h>
int main()
{

	int i,k,j,n,o;
	o=1;
	printf("enter no of rows\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	
		for(j=1;j<=n-i;j++)
		{
		
			printf("  ");
		}
		for(j=1;j<=i;j++)
		{
		
			printf("%4d",o);
			o++;
		}
		printf("\n");
	}
}
