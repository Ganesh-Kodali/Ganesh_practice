#include<stdio.h>

int main()
{
int m;
int fact=1;
printf("enter the number\n");
scanf("%d",&m);
while(m>0)
{
fact=fact*m;
m--;
}
printf("%d",fact);
}
