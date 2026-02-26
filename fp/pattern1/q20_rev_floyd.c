#include<stdio.h>

int main()
{
int n=4;
int x=10;
for(int i=1;i<=n;i++)
{
for(int j=1;j<=i;j++)
{
printf("%d ",x);
x--;
}
printf("\n");
}
}

