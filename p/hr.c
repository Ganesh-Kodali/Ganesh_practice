#include<stdio.h>

int main()
{
float r,i,j;
printf("enter no of rows\n");
scanf("%f",&r);
for(i=1;i<=2*r;i++)
{
for(j=1;j<=r;j++)
{
if(i==1||j==((i)/2)-2||j==r||j==1||i==2*r)
{
printf("* ");
}
else
printf("  ");
}
printf("\n");
}
}

