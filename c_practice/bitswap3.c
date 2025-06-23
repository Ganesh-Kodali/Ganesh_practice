#include<stdio.h>
int main()

{
int a,b,c,d;
short int num;
num=0x1234;

a=(num&0xF000);
b=num&0x0F00;
c=num&0x00F0;
d=num&0x000F;
num=(num<<12)|(num>>4);
printf("number after swapping middle bits %x",num);


}
