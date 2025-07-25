#include<stdio.h>

int main()
{

int n,j,i;

printf("enter no of rows\n");

scanf("%d",&n);

for(i=1;i<=2*n;i++)
{

for(j=1;j<=n;j++)

{
	if(i==1||i==2*n||j==1||j==n)
printf("* ");
	else
		printf("  ");

}
printf("\n");
}
}
 
