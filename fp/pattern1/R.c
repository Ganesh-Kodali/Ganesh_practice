#include<stdio.h>

int main()
{
int r,i,j;
printf("enter no of rows\n");
scanf("%d",&r);
for(i=1;i<=r;i++)
{
for(j=1;j<=r;j++)
{
if(i==1||i==r||j==1||j==r)
{
printf("* ");
}
else
printf("  ");
}
printf("\n");
}

for(int i=1;i<=r;i++)
{
for(int j=1;j<=i;j++)
{if(j==1||i==j)
printf("* ");
else
	printf("  ");
}printf("\n");
}

}

