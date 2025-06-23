#include<stdio.h>
int main()
{
int a,b;
printf("we are performing swapping without using temp var\n");
printf("enter the values of a,b\n");
scanf("%d%d",&a,&b);
a=a^b;
b=a^b;
a=a^b;
printf("values of a,b after swapping a is :%d ,b is %d",a,b);
}
