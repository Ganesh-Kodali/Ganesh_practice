#include<stdio.h>

int main()
{
    int a[]={1,2,4,0,0,5,0,4};
    int n=sizeof(a)/sizeof(int);
	int zero=0;
    for(int i=0;i<n-zero;i++)
    {
        if(a[i]==0)
        {
            for(int k=i;k<n-1;k++){
                a[k]=a[k+1];
            }
	    zero++;
            a[n-1]=0;
            i--;
        }
    }

    for(int j=0;j<n;j++)
        printf("%d ",a[j]);

    return 0;
}
