#include<stdio.h>
#include<string.h>
int main()
{
        char str[100];
        char temp;
	char pstr[100];

        printf("enter the string\n");

        fgets(str,sizeof(str),stdin);


	for(int i=0;str[i]!='\0';i++)
	{
	if(str[i]=='\n')
		str[i]='\0';
	}

	strcpy(pstr,str);
        int l,r;

        l=0;

        r=strlen(str)-1;

        while(l<r)
        {
                temp=str[l];
                str[l]=str[r];
                str[r]=temp;
        l++;
        r--;

        }


	if(strcmp(str,pstr)==0)
		printf("the given string is palindrome\n");
	else
		printf("the given string is not a palindrome\n");

}

