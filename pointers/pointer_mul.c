#include<stdio.h>
int main()
{
int a,b,mul=0;
int *p,*q;
printf("enter the values of a and b\n");
scanf("%d %d",&a,&b);
p=&a;
q=&b;
mul=(*p)*(*q);
printf("addition of a and b using pointers is %d\n",mul);
}
