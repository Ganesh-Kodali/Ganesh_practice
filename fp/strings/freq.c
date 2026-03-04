#include<stdio.h>

int main()
{
char str[100];
char freq[256];
int i;
printf("enter the string\n");
fgets(str,sizeof(str),stdin);

for(i=0;str[i]!='\0';i++)
	freq[str[i]]++;

for(i=0;str[i]!='\0';i++)
{
	if(freq[str[i]]==1)
		printf("%c ",str[i]);

}
}



