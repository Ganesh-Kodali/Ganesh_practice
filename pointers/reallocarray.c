#include<stdio.h>
#include<stdlib.h>
int main()
{       int *ar;
        int N,n,i;
        printf("enter no of elements\n");
        scanf("%d",&n);
        ar=(int *)malloc(n*sizeof(int));
        printf("enter the elements of array\n");
        for(i=0;i<n;i++)
{
scanf("%d",&ar[i]);
}
printf("enter new size of array\n");
        scanf("%d",&N);
ar=(int *)realloc(ar,N);
printf("enter new elements of array\n");
for(i=N-n;i<N;i++)
{
scanf("%d",&ar[i]);
}
 printf("elements of the array are\n");
  for(i=0;i<N;i++)
{
printf("%d\t",ar[i]);
}
printf("\n");
}
