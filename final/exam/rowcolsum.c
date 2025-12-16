#include<stdio.h>

int main()
{
int arr[3][3]={
	{1,2,3},
	{4,5,6},
	{7,8,9},
};

int sum=0;

for(int i=0;i<3;i++)
{sum=0;
for(int j=0;j<3;j++)
{
sum=sum+arr[i][j];
}
printf("row %d sum is %d\n",i,sum);
}

for(int j=0;j<3;j++)
{sum=0;
for(int i=0;i<3;i++)
{
sum=sum+arr[i][j];
}
printf("col %d sum is %d\n",j,sum);
}
}
