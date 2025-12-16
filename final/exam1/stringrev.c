#include<stdio.h>
#include<string.h>

void rev(char str[], int l, int r)
{
char temp;

while(l<r)
{
temp=str[l];
str[l]=str[r];
str[r]=temp;
l++;
r--;
}
}

int main()
{
char str[]="hello world";

int i,l=0;
int r=strlen(str)-1;

rev(str,l,r);

for(i=0;i<=r+1;i++)
{
if(str[i]==' ' || str[i]=='\0')
{
rev(str,l,i-1);
l=i+1;
}
}
printf("%s\n",str);
}
