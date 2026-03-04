#include<stdio.h>

int main()
{
char str[100];
char str1[100];
char freq[256]={0};
int i,j=0;
printf("enter the string\n");
fgets(str,sizeof(str),stdin);

for(i=0;str[i]!='\0';i++)
        if(freq[str[i]]==0)
	{freq[str[i]]++;
		str1[j]=str[i];
		j++;
	}
str1[j]='\0';
for(i=0;str1[i]!='\0';i++)
{
                printf("%c ",str1[i]);

}
}

