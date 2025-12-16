#include<stdio.h>

int main()
{

int n;
printf("enter no of elements\n");

scanf("%d",&n);

int arr[n];

int *p=arr;

printf("enter the elements\n");

for(int i=0;i<n;i++)
{
        scanf("%d",p+i);
}

int *l=arr;
int *r=arr+n-1;
int temp;
while(l<r)
{
temp=*l;
*l=*r;
*r=temp;
l++;
r--;
}
printf("after reversing the array\n");

for(int i=0;i<n;i++)
{
        printf("%d",*(p+i));
}

}
