#include<stdio.h>

int main()
{
char src[100];
char dest[100];
int i=0,j=0;
printf("enter the strings\n");

fgets(src,sizeof(src),stdin);
for(int j=0;src[j]!='\0';j++)
        {
                if(src[j]=='\n')
                        src[j]='\0';
        }

fgets(dest,sizeof(dest),stdin);
for(int j=0;dest[j]!='\0';j++)
        {
                if(dest[j]=='\n')
                        dest[j]='\0';
        }

char *p=src;

char *q=dest;

while(*p)
        p++;

while(*q)
{
*p=*q;
p++;
q++;
}
*p='\0';
printf("sfter concatination the combined string is %s\n",src);
}

