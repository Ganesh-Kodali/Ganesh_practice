#include<stdio.h>

int main()
{

unsigned int n;

printf("enter the number\n");
scanf("%d",&n);

n=~n;

printf("the value after fliping the number is %u",n);
}
