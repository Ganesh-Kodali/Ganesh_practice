#include<stdio.h>

int main()
{
int i,j,k;
int n=5;

for(i=n;i>0;i--)
{
for(k=1;k<=(n-i);k++)
        printf(" ");
for(j=1;j<=i;j++)
{
if(j==1||j==i||i==n)
{
printf("%d ",j);
}
else
printf("  ");
}
printf("\n");
}



for(i=2;i<=n;i++)
{
for(k=1;k<=(n-i);k++)
        printf(" ");
for(j=1;j<=i;j++)
{
if(j==1||j==i||i==n)
{
printf("%d ",j);
}
else
printf("  ");
}
printf("\n");
}

}

