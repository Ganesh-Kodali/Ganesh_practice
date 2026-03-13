#include<stdio.h>

struct student{
        int roll;
        int marks;
};

void display(struct student s1)
{
printf("%d %d\n",s1.roll,s1.marks);
}
int main()
{
struct student s1={1,95};
display(s1);
}

