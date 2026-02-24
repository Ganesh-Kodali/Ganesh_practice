#include<stdio.h>

int main()
{
int n;
printf("enter no fo rows\n");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
        for(int k=n;k>i;k--)
                printf(" ");
for(int j=1;j<=i;j++)
{
	if(j==1||i==j)
        printf("* ");
	else 
		printf("  ");
}
printf("\n");
}

for(int i=n-1;i>0;i--)
{
        for(int k=n;k>i;k--)
                printf(" ");
for(int j=1;j<=i;j++)
{
	if(j==1||i==j)
        printf("* ");
	else 
		printf("  ");
}
printf("\n");
}
}
