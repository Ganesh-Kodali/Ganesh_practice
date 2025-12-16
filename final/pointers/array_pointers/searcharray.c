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

printf("enter the element to search\n");

int key,found=0,i;

scanf("%d",&key);

for(int i=0;i<n;i++)
{
if(*(p+i)==key){
	found=i;
	break;}
}
if(found!=0)
printf("the given key is found at %d\n",i);
else 
printf("the given key is not found\n");
}
