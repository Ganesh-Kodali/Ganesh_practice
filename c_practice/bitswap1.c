#include<stdio.h>
int main()

{
int a,b,c,d,num;
num=0x1234;
a=(num&0xF000);
b=num&0x0F00;
c=num&0x00F0;
d=num&0x000F;
num=(a>>12)|(c)|(b)|(d<<12);
printf("number after swapping both end  bits %x",num);


}
