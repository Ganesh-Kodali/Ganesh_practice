#include<stdio.h>

struct student{
        int roll;
        int marks;
};

void display(struct student *p)
{
p->roll=2;
p->marks=90;
}

int main()
{
struct student s1={1,95};
struct student *p=&s1;

display(p);
printf("%d",s1.roll);
printf("%d",s1.marks);
}

