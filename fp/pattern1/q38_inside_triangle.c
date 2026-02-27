#include<stdio.h>

int main()
{
int n;
printf("enter no fo rows\n");
scanf("%d",&n);
for(int i=1;i<2*n;i++)
	printf("* ");
for(int i=1;i<=n;i++)
{
for(int j=1;j<=i;j++)
{
        printf("* ");
}
for(int k=n;k>i;k--)
printf("  ");
for(int k=n;k>i;k--)
printf("  ");
for(int j=1;j<=i;j++)
        printf("* ");

printf("\n");
}
}

