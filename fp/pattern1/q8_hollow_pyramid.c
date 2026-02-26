#include<stdio.h>

int main()
{
int n;
printf("enter no of rows\n");
scanf("%d",&n);
n=2*n;
for(int i=1;i<=n;i++)
{
        if(i%2==0 && i!=n)
        continue;
        for(int k=i;k<n;k++)
                printf(" ");
for(int j=1;j<=i;j++)
{
	if(i==n||j==1||j==i)
		printf("* ");

	else
		printf("  ");
}printf("\n");
}
}

