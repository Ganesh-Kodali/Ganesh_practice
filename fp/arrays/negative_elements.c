#include<stdio.h>

int neg_count(int *a,int n)
{
	int count=0;
for(int i=0;i<n;i++)
{
if(a[i]<0)
        count++;
}
return count;
}

int main()
{
int a[]={-1,2,-5,8,-9};

int n=sizeof(a)/sizeof(int);

int c=neg_count(a,n);
printf("total negative elements are %d\n",c);
}
