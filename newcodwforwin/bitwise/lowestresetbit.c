#include<stdio.h>


int main()
{

        int n,count=0;
        printf("enter the number\n");
        scanf("%d",&n);

        while((n&1)!=0)
        {

                count++;
                n=n>>1;

        }

        printf("the lowest set bit is in %d th position\n",count);

}

