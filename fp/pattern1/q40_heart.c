#include<stdio.h>

int main()
{
int n;
printf("enter no of rows\n");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
	if(i==1|i==2)
		continue;
        for(int k=i;k<n;k++)
                printf(" ");
for(int j=1;j<=i;j++)

printf("* ");
        for(int k=i;k<n;k++)
                printf(" ");

	        for(int k=i;k<n;k++)
                printf(" ");

	for(int j=1;j<=i;j++)

printf("* ");

printf("\n");
}
n=2*n;
for(int i=n;i>0;i--)
{
        for(int k=i;k<n;k++)
                printf(" ");
for(int j=1;j<=i;j++)

printf("* ");
printf("\n");
}
}

