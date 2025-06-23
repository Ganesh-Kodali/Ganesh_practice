#include<stdio.h>

int main()
{

int n;
printf("enter the no of rows\n");
scanf("%d",&n);

for (int i=n;i>=0;i--)
{
        for (int k=0;k<n-i;k++){

        printf(" ");
        }
for (int j=0;j<=i;j++)
{
printf("* ");
}
printf("\n");
}
}
