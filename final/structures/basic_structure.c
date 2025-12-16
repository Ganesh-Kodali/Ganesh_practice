#include<stdio.h>

struct student{
	int roll;
	int marks;
};

int main()
{
struct student s1={1,95};

printf("%d",s1.roll);
printf("%d",s1.marks);
}
