#include<stdio.h>
int main()
{
int x;
int *p;
x=10;
p=&x;
printf("address of x is %p\n",p);
printf("printing x using pointer:%d\n",*p);
}
