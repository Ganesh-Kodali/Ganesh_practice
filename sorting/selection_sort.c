#include<stdio.h>
int main()
{
int mindx,i,j,n,temp;
printf("enter no of elements in the array\n");
scanf("%d",&n);
int a[n];
printf("enter the array elements\n");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
	mindx=i;
	for(j=i+1;j<n;j++)
	{
		if(a[j]<a[mindx]){
			mindx=j;
		}
	}
	temp=a[i];
	a[i]=a[mindx];
	a[mindx]=temp;
}
printf("array elements after sorting are\n");
for(i=0;i<n;i++){
	printf("%d ",a[i]);
}
}
