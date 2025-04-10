#include<stdio.h>
int main()
{
int a,b,sum=0;
int *p,*q;
printf("enter the values of a and b\n");
scanf("%d %d",&a,&b);
p=&a;
q=&b;
sum=*p+*q;
printf("addition of a and b using pointers is %d\n",sum);
}
