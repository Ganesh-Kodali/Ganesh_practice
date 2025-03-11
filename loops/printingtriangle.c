#include<stdio.h>

int main()
{
	int rows,i=0,j=0;
printf("enter no of rows\n");
scanf("%d",&rows);
for (i=1;i<=rows;i++)
{
for (j=1;j<=i;j++)
{
printf("*");
}
printf("\n");
}
for (i=rows;i>=0;i--)
{
for (j=1;j<=i;j++){
	printf("*");
}
printf("\n");
}

}
