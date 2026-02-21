#include<stdio.h>

int main()
{
int a[]={1,2,3,4,5};

int n=sizeof(a)/sizeof(int);

int b[]={1,2,3,4,6};

int m=sizeof(a)/sizeof(int);
int flag=1;
for(int i=0;i<n;i++)
{
if(a[i]!=b[i])
{
flag=0;
printf("both arrays are not similar\n");
break;
}
}

if(flag==1)
{
printf("both arrays are similar\n");
}
}
