#include<stdio.h>
int main()
{
int i,j,n,temp;
printf("enter no of elements in the array\n");
scanf("%d",&n);
int a[n];
printf("enter the array elements\n");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
for(i=0;i<(n-1);i++)
{
        for(j=i+1;j<n;j++){
                if(a[j]<a[i]){
                        temp=a[j];
                        a[j]=a[i];
                        a[i]=temp;
                }
        }
}
printf("max of array is\n");

printf("%d\n",a[n-1]);
}
