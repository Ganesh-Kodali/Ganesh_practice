#include<stdio.h>

int main()
{
int x, n;
printf("enter no of rows\n");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{if(i%2==0)
	x=0;
	else
		x=1;
for(int j=1;j<=i;j++)
{
printf("%d ",x);
x=x^1;
}
printf("\n");
}
}

