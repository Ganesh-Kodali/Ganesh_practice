#include<stdio.h>
int main()
{
int ar[5]={1,2,3,4,5};
int *p;
int sum=0;
p=ar;
for(int i=4;i>=0;i--)
{
printf("rev of array elements in array is %d\n",*(p+i));
}

}
