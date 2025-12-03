#include<stdio.h>

int main()
{
int a,b,m,d;

printf("enter 2 numbers \n");
scanf("%d %d",&a,&b);

d=a-b;

m=d>>(sizeof(int)*8)-1;

int max=a-(m&d);

printf("max of 2 is %d\n",max);	
}
