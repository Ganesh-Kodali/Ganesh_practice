#include<stdio.h>

int main()
{
    int r;
    printf("Enter the radius: ");
    scanf("%d", &r);

    for(int i = -r; i <= r; i++)
    {
        for(int j = -2*r; j <= 2*r; j++)  
        {
            if(i*i + (j*j)/4 <= r*r)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
