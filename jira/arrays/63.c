#include<stdio.h>

void sort(int a[],int n)
{
for(int i=0;i<n;i++)
{
for(int j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
int temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
}

int main()
{

int a[]={1,2,3,4,5};

int n=sizeof(a)/sizeof(int);

int b[]={1,4,3,1,2};

int m=sizeof(a)/sizeof(int);

sort(a,n);
sort(b,m);


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

