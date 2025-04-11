#include<stdio.h>
int main()
{
int k,i,j,rows;
printf("enter no of rows\n");
scanf("%d",&rows);
for(i=rows;i>0;i--)
{
for(j=1;j<=i;j++)
{
printf("*");
}
for(k=1;k<=rows-i;k++){
printf("  ");

}
for (j=1;j<=i;j++)
{
printf("*");
}
printf("\n");
}
}
