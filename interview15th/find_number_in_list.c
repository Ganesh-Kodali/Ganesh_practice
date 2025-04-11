#include<stdio.h>
int main()
{
int ar[5]={1,2,3,4,5};
int n,nn;
printf("this is finding number in the list\n");
printf("enter the number\n");
scanf("%d",&n);
for(int i=0;i<5;i++)
{
if(ar[i]==n)
{
	nn=ar[i];
printf("the number is present in the list\n");
}
}
if(nn!=n)
{
printf("the number is not present in the list\n");
}
}
