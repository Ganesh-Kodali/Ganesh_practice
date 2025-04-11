#include<stdio.h>
int main()
{
int ar[3][4],arr[3][4];
int i,j;
for(i=0;i<3;i++)
{
for(j=0;j<4;j++)
{
scanf("%d",&ar[i][j]);

}
printf("\n");
}
for(i=0;i<3;i++)
{
for(j=0;j<4;j++)
{
scanf("%d",&arr[i][j]);

}
printf("\n");
}
for(i=0;i<3;i++)
{
for(j=0;j<4;j++)
{
printf("%d\t",ar[i][j]+arr[i][j]);

}
printf("\n");
}
}
