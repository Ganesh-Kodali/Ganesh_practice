#include<stdio.h>

int main()
{
int n;

printf("enter no of rows\n");
scanf("%d",&n);

for(int i=n;i>0;i--)
{
for(int j=1;j<=i;j++)
{
printf("%d ",j);

}
for(int k=0;k<n-i;k++)
{
	if(k==n)
		continue;
printf("    ");
}

for(int j=i;j>=1;j--)
{
	if (j==n)
		continue;
printf("%d ",j);

}

printf("\n");
}

for(int i=1;i<=n;i++)
{
for(int j=1;j<=i;j++)
{
printf("%d ",j);

}
for(int k=n;k>i;k--)
{if(k==n)
                continue;

printf("    ");
}
for(int j=i;j<=n;j++)
{
	if(j==n)
                continue;

printf("%d ",j);

}
printf("\n");
}
}

