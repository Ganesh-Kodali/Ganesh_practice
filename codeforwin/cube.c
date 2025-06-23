#include<stdio.h>

int cube(int n)
{
return n*n*n;
}
int main()
{
int n;
printf("enter the number\n");
scanf("%d",&n);
n=cube(n);
printf("the cube of the number is %d",n);
}
