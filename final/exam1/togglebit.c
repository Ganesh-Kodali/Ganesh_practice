#include<stdio.h>

int main()
{
int n;
printf("enter the number\n");
scanf("%d",&n);
n=n^(1<<7);

printf("%d\n",n);
}
