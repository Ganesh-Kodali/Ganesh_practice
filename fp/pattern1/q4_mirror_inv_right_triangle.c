#include<stdio.h>

int main()
{
int n;
printf("enter no of rows\n");
scanf("%d",&n);

for(int i=n;i>0;i--)
{
	for(int k=i;k<n;k++)
		printf("  ");
for(int j=1;j<=i;j++)

printf("* ");
printf("\n");
}
}

