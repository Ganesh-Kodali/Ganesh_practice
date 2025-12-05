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


for(p=str;*p!='\0';p++)
{
 found=1;

	char *p1=p;
	char *p2=sub;

	while(*p2!='\0')
	{
		if(*p1!=*p2)
		{
		found=0;
		break;
		}
		p1++;
		p2++;
	}
	if(found==1)
		break;
}

if(found==1)
	printf("the substring is found\n");
	else
	printf("the substring is not found\n");

		}
