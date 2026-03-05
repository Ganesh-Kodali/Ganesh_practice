#include<stdio.h>

int main()
{
        int start,end;
        printf("enter starting table n ending table\n");
        scanf("%d %d",&start,&end);

        for(int i=start;i<=end;i++)
        {
                for(int j=1;j<=10;j++)
                        printf("%d x %d = %d \n",i,j,i*j);
                printf("\n");
        }
}


