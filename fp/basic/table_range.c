#include<stdio.h>

int main()
{
	int start,end;
	printf("enter starting table n ending table\n");
	scanf("%d %d",&start,&end);

	for(int i=1;i<=10;i++)
	{
		for(int j=start;j<=end;j++)
			printf("%d x %d = %d \t",j,i,i*j);
		printf("\n");
	}
}

