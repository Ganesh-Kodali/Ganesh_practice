#include<stdio.h>

int main()
{
        int rows,i=0,j=0,k=0;
printf("enter no of rows\n");
scanf("%d",&rows);
for (i=1;i<=rows;i++)
{
for(k=1;k<=rows-i;k++){
printf(" ");

}	
for (j=1;j<=i;j++)
{
printf("* ");
}
printf("\n");
}}
