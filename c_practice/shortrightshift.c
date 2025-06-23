#include<stdio.h>
int main()
{
short int n;
n=0x0bcd;
n=n>>8;
printf("after right shift %x\n",n);
}
