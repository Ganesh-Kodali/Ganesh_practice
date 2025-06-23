#include<stdio.h>
int main()
{
int a,b;
printf("swapping using arthemactic operators without using 3rd var\n");
printf("enter the values of a,b\n");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("the values of a,b after swapping are \n a = %d  b= %d",a,b);
}
