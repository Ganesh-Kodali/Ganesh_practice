#include<stdio.h>

int main()
{
printf("enter no of rows n cols\n");
int row,col;
scanf("%d %d",&row,&col);

int i=0,j=0;

int mat[row][col];
printf("enter the elements of the 2d matrix\n");

for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
scanf("%d",&mat[i][j]);
}
}

for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
if(i==j||i+j==col-1)
        mat[i][j]=0;
}
}


for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
printf("%d ",mat[i][j]);

}
printf("\n");
}

}

