#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
char input[100];
char *ptr;
int count=0;
printf("enter the string\n");
fgets(input,sizeof(input),stdin);
ptr = input;
while(*ptr!='\0')
{
char ch= tolower(*ptr);
if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
{
count++;
}
ptr++;
}
printf("total no of vowels are %d",count);
}

