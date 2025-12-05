#include<stdio.h>
#include<string.h>

int main()
{
char str[100];
int temp;
int start=0 ,end=0;

printf("enter the given string\n");
fgets(str,sizeof(str),stdin);

int len=strlen(str);

while(end<=len)
{
if(str[end]==' ' ||str[end]=='\0')
{
int i=start,j=end-1;

while(i<j)
{
temp=str[i];
str[i]=str[j];
str[j]=temp;
i++;
j--;
}
start=end+1;
}
end++;
}
printf("after reverse %s\n",str);
return 0;
}
