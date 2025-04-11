#include<stdio.h>
int main()
{
int n,nn;
printf("extracting 4 consecutive bits \n");
printf("enter the number\n");
scanf("%d",&n);
n=n&0x0f00;
nn=n>>8;
printf("after extracting the hexa decimal number is %x",nn);
}
