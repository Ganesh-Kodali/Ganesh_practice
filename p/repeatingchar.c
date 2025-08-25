#include<stdio.h>

int main()
{

char str[100];

printf("enter the string\n");

fgets(str,sizeof(str),stdin);

char freq[255];

int i=0;
while(str[i]!=0)
{

	freq[str[i]]++;
	i++;
}
i=0;
while(str[i]!=0)
{

	if(freq[str[i]]>1)
	{
	
		printf("the repeating char is %c\n",str[i]);
		freq[str[i]]=1;
	}
	i++;
}

}
