#include<stdio.h>
int main()

{
int a,b,c,d,num;
printf("enter the hexa decimal number");
scanf("%x",&num);
a=(num&0xF000);
b=num&0x0F00;
c=num&0x00F0;
d=num&0x000F;
num=(a>>12)|(c<<4)|(b>>4)|(d<<12);
printf("number after swapping all bits %x",num);


}
