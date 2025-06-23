#include<stdio.h>
int inc(int *a){

*a=*a+1;
return *a;
}
int main()
{
int a;
printf("enter the value of a\n");
scanf("%d",&a);
inc(&a);
printf("the value of a after inc is %d\n",a);
}

