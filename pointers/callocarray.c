#include<stdio.h>
#include<stdlib.h>
int main()
{       int *ar;
        int n,i;
        printf("enter no of elements\n");
        scanf("%d",&n);
        ar=(int *)calloc(n,sizeof(int));
        //printf("enter the elements of array\n");
        //for(i=0;i<n;i++)
//{
//scanf("%d",&ar[i]);
//}
 printf("elements of the array are\n");
  for(i=0;i<n;i++)
{
printf("%d\n",ar[i]);
}
}
