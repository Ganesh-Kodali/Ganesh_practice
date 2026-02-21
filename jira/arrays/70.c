#include<stdio.h>

int main()
{
int a[]={1,8,3,4,5};

int n=sizeof(a)/sizeof(int);

int first=a[n-1],second=a[n-1];

for(int i=0;i<n;i++)
{
if(a[i]<first)
{second =first;
first=a[i];

}
else if(a[i]>first && a[i]<second)
{
        second=a[i];
}
}

printf("%d",second);
}

