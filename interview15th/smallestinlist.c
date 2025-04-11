#include<stdio.h>
int main()
{
int ar[5]={87,25,37,48,5};
int small=9999999;
for(int i=1;i<=5;i++)
{
if(ar[i]<small)
{
small=ar[i];
}

}
printf("smallest number is %d",small);
}
