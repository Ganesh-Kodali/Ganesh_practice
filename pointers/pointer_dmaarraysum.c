#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,n,sum=0;
    printf("enter the no of elements:");
    scanf("%d",&n);
    p = (int *)malloc(n*(sizeof(int)));
    if(p == NULL)
    {
        printf("Error!meomory is not allocated\n");
        exit(0);
    }
    printf("enter the elemets:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",p+i);
        //sum += *(p+i);
        sum = sum +*(p+i);
    }
    printf("Sum = %d",sum);
    free(p);
    printf("\n");
    return 0;
}
