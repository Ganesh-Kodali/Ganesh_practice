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


while(src[i]!='\0')
	i++;

while(dest[j]!='\0')
{
src[i+j]=dest[j];
j++;
}
src[i+j]='\0';
printf("sfter concatination the combined string is %s\n",src);
}
