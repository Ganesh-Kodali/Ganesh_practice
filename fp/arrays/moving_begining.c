#include<stdio.h>

int main()
{
int arr[]={1,0,3,0,0,0,6,7,9};

int n=sizeof(arr)/sizeof(int);

int temp[100];

int j=0;

for(int i=0;i<n;i++)
{
if(arr[i]==0)
{
temp[j]=0;
j++;
}
}
for(int i=0;i<n;i++)
{
if(arr[i]!=0)
{
temp[j]=arr[i];
j++;
}
}

for(int i=0;i<n;i++)
printf("%d ",temp[i]);

}
