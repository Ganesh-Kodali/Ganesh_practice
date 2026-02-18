#include<stdio.h>

int main()
{
int a[]={1,2,43,98,3,2,5,6};

int n=sizeof(a)/sizeof(int);
for(int i=0;i<n;i++){
printf("%d ",a[i]);
}

for(int i=0;i<n/2;i++)
{
int temp=a[i];
a[i]=a[n-i-1];
a[n-i-1]=temp;
}

printf("after reversing\n");
for(int i=0;i<n;i++){
printf("%d ",a[i]);
}
}
