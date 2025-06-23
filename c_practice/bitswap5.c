#include<stdio.h>
int main()
{
int a,b,c,d,num;
printf("enter the 4bit binary number\n");
scanf("%b",&num);
a=num&8;
b=num&4;
c=num&2;
d=num&1;
num=a|b|(c>>1)|(d<<1);
printf("number after swapping%b\n",num);
}
