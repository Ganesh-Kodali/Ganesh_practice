#include<stdio.h>

int main()
{
        int i,j,found;
char str[1000];
char sub[1000];
char *p=str;
char *q=sub;
printf("enter the main string\n");
fgets(str,sizeof(str),stdin);

printf("enter the sub string to find\n");
fgets(sub,sizeof(sub),stdin);

while(*p)
{
if(*p=='\n')
	*p='\0';
p++;
}



while(*q)
{
if(*q=='\n')
        *q='\0';
q++;
}


for(i=0;str[i]!='\0';i++)
{
found=1;

for(j=0;sub[j]!='\0';j++)
{
if(str[i+j]!=sub[j])
{       found=0;
        break;
}
}

if(found==1)
{       printf("the given substring is found\n");

        return 0;
}       }


        printf("the given substring is not found\n");

}

