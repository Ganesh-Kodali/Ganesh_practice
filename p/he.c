#include<stdio.h>

int main()
{

int k,n,j,i;

printf("enter no of rows\n");

scanf("%d",&n);

for(i=1;i<=n;i++)
{

for(k=1;k<=n-i;k++)
{
printf(" ");
}

for(j=1;j<=i;j++)

{
	if(j==i||i==n||j==1)
printf("* ");
	else
		printf("  ");

}
printf("\n");
}
}

