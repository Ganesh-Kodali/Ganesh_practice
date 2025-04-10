#include<stdio.h>
int main()
{
int ar[5]={1,2,3,4,5};
int *p;
int i;
p=ar;
for(i=0;i<5;i++)
{
printf("%p\n",(p+i));
}
}
