#include<stdio.h>

int main()
{
int n=20;

int a=0,b=0,c=1;

while(c<20)
{printf("%d ",c);
a=b;
b=c;
c=a+b;
}
printf("\n");
printf("%d ",b);
while(a>0)
{
a=c-b;
c=b;
b=a;
if(a!=0)
printf("%d ",a);
}
}
