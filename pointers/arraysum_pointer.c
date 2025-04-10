#include<stdio.h>
int main()
{
int ar[5]={1,2,3,4,5};
int *p;
int sum=0;
p=ar;
for(int i=0;i<5;i++)
{
sum=sum+*(p+i);
}
printf("sum of array elements in array is %d\n",sum);
}
