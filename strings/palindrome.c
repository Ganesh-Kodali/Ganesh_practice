#include<stdio.h>
#include<string.h>

int ispalindrome(char s[]){

int left=0;
int right=strlen(s)-1;

while(left<right)
{if(s[left]!=s[right])
	return 0;

	left++;
	right--;

}
return 1;
}
int main()
{
printf("enter the string\n");
char s[50];
scanf("%s",s);
if(ispalindrome(s))
{
printf("the given string is palindrome\n");
}
else 
printf("the given string is not a palindrome\n");
}
