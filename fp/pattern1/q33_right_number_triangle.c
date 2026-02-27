#include<stdio.h>

int main()
{
int n;
printf("enter no of rows\n");
scanf("%d",&n);
n=2*n;
for(int i=1;i<=n;i++)
{ if(i%2==0)
	continue;
for(int j=1;j<=i;j++)
{
	if(j==i/2)
		printf("%d ",i);
	else
printf("* ");
}printf("\n");
}
}

