#include<stdio.h>
int main()
{
int i,j,n,even=0,odd=0;
printf("freq of array elements\n");
printf("enter no of elements in the array\n");
scanf("%d",&n);
int ar[n];
int e[n];
int o[n];
printf("enter the elements in the array\n");
for(i=0;i<n;i++)
{
scanf("%d",&ar[i]);
}
for (i=0;i<n;i++)
{
if(ar[i]%2==0)
{
	even++;
e[even]=ar[i];

}
else{
odd++;
	o[odd]=ar[i];
}
}
printf("even elements of the array are \n");
for(i=1;i<=even;i++)
{
printf("%d\n",e[i]);
}
printf("odd elements of the array are \n");
for(i=1;i<=odd;i++)
{                                                                                                                                    printf("%d\n",o[i]);
}
}

