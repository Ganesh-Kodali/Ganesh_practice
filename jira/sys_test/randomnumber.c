#include <stdio.h>

int main()
{
    int i;

    for (i = 0; i < 100; i++){
        printf("%d ", ((i+11)%7)+i);
    
    if(i%10==0)
	    printf("\n");
    }
    return 0;
}

