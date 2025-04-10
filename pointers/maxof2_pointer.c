#include<stdio.h>

int main()
{
int a,b;
int *p,*q;
printf("enter the values of a and b\n");
scanf("%d %d",&a,&b);
p=&a;
q=&b;
if(*p>*q)
{
printf("a is greater\n");
}
else 
{
printf("b is greater\n");
}
}
