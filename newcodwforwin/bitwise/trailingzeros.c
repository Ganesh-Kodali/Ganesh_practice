#include<stdio.h>


int main()
{

        int n,count=0;
        printf("enter the number\n");
        scanf("%d",&n);

        while((n&1)!=1)
        {

                count++;
                n=n>>1;

        }

        printf("total no of trailing zeros are %d\n",count);

}

