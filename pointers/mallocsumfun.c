#include<stdio.h>
#include<stdlib.h>
int sum(int *ar, int Sum);
int main()
	
{       int *ar;
        int n,i,Sum=0;
        printf("enter no of elements\n");
        scanf("%d",&n);
        ar=(int *)malloc(n*sizeof(int));
        printf("enter the elements of array\n");
        for(i=0;i<n;i++)
{
scanf("%d",&ar[i]);
}
 printf(" sum of elements of the array are\n");

Sum=sum(ar,n);
 printf("%d\n",Sum);
}
int sum(int *ar, int n)
{
int i,Sum=0;
  for(i=0;i<n;i++)
{
Sum= Sum+*(ar+i);
}
return Sum;
}
