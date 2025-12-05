#include<stdio.h>

#include<string.h>

void strrev(int l,int r, char *str)
{
	char temp;
while(l<r)
{
	temp=str[l];
	str[l]=str[r];
	str[r]=temp;
	l++;
	r--;
}
}

int main()
{
	int i=0;
	int l=0,r=0;
	char str[100];

	printf("enter the sentence\n");

	fgets(str,sizeof(str),stdin);

	for(int j=0;str[j]!='\0';j++)
	{
		if(str[j]=='\n')
			str[j]='\0';
	}
	while(str[i]!='\0')
	{
		l=i;
		while(str[i]!=' '&& str[i]!='\n' && str[i]!='\0')
			i++;
		r=i-1;
		strrev(l,r,str);
		 while(str[i]==' ')
                i++;
	}

	printf("after the word rev the given word is %s\n",str);
}
