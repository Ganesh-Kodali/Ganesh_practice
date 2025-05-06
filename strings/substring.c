#include<stdio.h>
#include<string.h>
int main()
{
char str[]="hello world";
char r[20];
int start = 6;
int length =5;
strncpy(r,str+start,length);
r[length]='\0';
printf("substring is %s\n",r);
}
