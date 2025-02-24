#include<stdio.h>

int main()
{
int num,n,n1,newnum;
printf("enter the number\n");
scanf("%d",&num);
printf("enter first bit to reset\n");
scanf("%d",&n);
printf("enter 2nd bit to reset\n");                                                                                                
scanf("%d",&n1);
newnum= num&(~(1<<n))& num&(~(1<<n1));
printf("number after setting the bit is %d",newnum);
}
