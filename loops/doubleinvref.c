#include<stdio.h>
int main()
{
int l,k,i,j,rows;
printf("enter no of rows\n");
scanf("%d",&rows);
for(i=rows;i>0;i--)
{
for(j=1;j<=i;j++)
{ 
printf("%d",j);
}
for(k=1;k<=rows-i;k++){
printf("  ");

}
for (l=i;l>0;l--)
{
printf("%d",l);
}
printf("\n");
}
}
