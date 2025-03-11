#include<stdio.h>
int main()
{
int a,b;
printf("enter the number\n");
scanf("%d",&a);
b=a&1;
if (b==0)
        printf("given number is even");
else
        printf("given number is odd");
}
