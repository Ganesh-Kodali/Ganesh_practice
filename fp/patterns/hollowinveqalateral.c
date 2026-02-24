#include<stdio.h>

int main()
{
int n;
printf("enter no fo rows\n");
scanf("%d",&n);
for(int i=n;i>0;i--)
{
        for(int k=n;k>i;k--)
                printf(" ");
for(int j=1;j<=i;j++)
{
	if(i==n||i==j||j==1)
        printf("* ");
	else
		printf("  ");
}
printf("\n");
}
}

