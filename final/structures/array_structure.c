#include<stdio.h>

struct student{
        int roll;
        int marks;
};

int main()
{
struct student arr[2]={
	{1,95},
	{2,90},
};

printf("%d %d\n",arr[1].roll,arr[1].marks);
printf("%d %d\n",arr[0].marks,arr[0].roll);
}

