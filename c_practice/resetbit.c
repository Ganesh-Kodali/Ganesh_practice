#include<stdio.h>

int main()
{
int num,n,newnum;
printf("enter the number\n");
scanf("%d",&num);
printf("enter which bit to reset\n");
scanf("%d",&n);
newnum= num&(~(1<<n));
printf("number after setting the bit is %b",newnum);
}
