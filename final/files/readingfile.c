#include<stdio.h>

int main()
{
        FILE *fp;

        fp=fopen("gar.txt","r");

	char line[100];

	while(fgets(line,sizeof(line),fp))

		printf("%s",line);


        fclose(fp);
}

