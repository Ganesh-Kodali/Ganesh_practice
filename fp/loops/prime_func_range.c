#include<stdio.h>

int isprime(int n){
        for(int i=2;i<=n/2;i++)
        {
        if(n%i==0)
                return 0;
        }
return 1;
}

int main()
{
int n;
int start,end;
printf("enter starting n ending\n");
scanf("%d%d",&start,&end);
for(int i=start;i<=end;i++){
if(isprime(i))
        printf("%d ",i);
}
}

