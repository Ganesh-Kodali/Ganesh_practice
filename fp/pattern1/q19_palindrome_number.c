#include<stdio.h>

int main()
{
int n;
printf("enter no of rows\n");
scanf("%d",&n);

for(int i=1;i<=n;i++)
{
for(int j=i;j>0;j--)

printf("%d ",j);

for(int j=2;j<=i;j++)

printf("%d ",j);
printf("\n");
}
}
