#include<stdio.h>

int main()
{
        FILE *fp ,*dest;
	
	char ch;
        fp=fopen("gar.txt","r");
	dest=fopen("copying.txt","w");
	
	ch=fgetc(fp);

	while(ch!=EOF)
	{
	fputc(ch,dest);

	ch=fgetc(fp);
	}

	fclose(dest);

	
		
        fclose(fp);
}

