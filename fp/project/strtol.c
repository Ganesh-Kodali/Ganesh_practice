#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    char *endptr;
	fgets(str,sizeof(str),stdin);
    long num = strtol(str, &endptr, 10);

    printf("Number = %ld\n", num);
    printf("Remaining string = %s\n", endptr);

    return 0;
}
