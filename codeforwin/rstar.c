#include<stdio.h>
int main()
{
int n;
printf("enter the no of rows for star pattern\n");
scanf("%d",&n);

for (int i=0; i<n;i++)
{

	for(int k=0;k<=n-i+1;k++)
	{
	printf(" ");
	}
for (int j=0; j<n;j++)
{
printf("*");
}
printf("\n");
}
}
