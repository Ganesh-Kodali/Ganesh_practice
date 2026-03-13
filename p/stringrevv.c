#include<stdio.h>
#include<string.h>

int main()
{
char str[100]="hello world";

char l,r;
l=0;
r=strlen(str)-1;
char temp;
while(l<r)
{
temp=str[l];
str[l]=str[r];
str[r]=temp;
l++;
r--;
}
printf("%s",str);
}
