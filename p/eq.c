#include<stdio.h>

int main()
{

int k, n,j,i;

printf("enter no of rows\n");

scanf("%d",&n);

for(i=1;i<=n;i++)
{

for(j=1;j<=i;j++)

{
printf("* ");

}
printf("\n");
}
}

