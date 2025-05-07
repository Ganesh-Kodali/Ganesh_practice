#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
char input[100];
char *ptr;
int count=0;
int ccount=0;
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
ccount= strlen(input)-1-count;
printf("total no of consonants are %d\n",ccount);
}
