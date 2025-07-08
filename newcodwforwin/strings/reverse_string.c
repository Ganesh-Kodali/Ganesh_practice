#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
char str1[100];
int temp=0;
printf("enter the string\n");
fgets(str,sizeof(str),stdin);

int l=0,r;

r=strlen(str)-1;

while(l<r)
{
temp=str[l];
str[l]=str[r];
str[r]=temp;

l++;
r--;
}
printf("after reversing %s",str);
}

