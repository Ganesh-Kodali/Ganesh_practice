#include<stdio.h>
int main()
{
int n;
printf("enter the no of rows for star pattern\n");
scanf("%d",&n);

for (int i=0; i<=n;i++)
{

for (int j=0; j<=n;j++)
{
if(j==0||j==n||i==0||i==n)
{
printf("* ");
}
else 
{
printf("  ");
}
	
}
printf("\n");
}
}
