#include<stdio.h>
int main()
{
int ar[5]={10,2,3,4,5};
int i;
 int *p=ar;
for (i=0;i<5;i++)
{
printf("%d\n",*(p+i));
}
}
