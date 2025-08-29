#include<stdio.h>

int main()
{
printf("enter no of rows n cols\n");
int row,col;
scanf("%d %d",&row,&col);

int i=0,j=0;

int mat[row][col];

int tra[col][row];

printf("enter the elements of the 2d matrix\n");

for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
scanf("%d",&mat[i][j]);
}
}

printf("normal matrix\n");
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
printf("%d ",mat[i][j]);

}
printf("\n");

}
printf("\v");
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{

tra[j][i]=mat[i][j];

}
}

for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
printf("%d ",tra[i][j]);
}
printf("\n");
}
}

