#include<stdio.h>
int fact(int n)
{
int r=1;
for (int i=1;i<=n;i++)
{
r=r*i;

}
return r;
}

int pasc(int n,int k)
{
return fact(n)/(fact(k)*(fact(n-k)));
}

int main()
{
int n;
printf("enter no of rows in pascal triangle\n");
scanf("%d",&n);

for(int i=0;i<=n;i++)
{
	for (int k=0;k<=n-i-1;k++)
	{
	printf(" ");
	}

	for (int j=0;j<=i;j++)

	{
	printf("%d ",pasc(i,j));
	
	}
printf("\n");
}}
