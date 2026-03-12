#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    // Open the current source file in read mode
    fp = fopen(__FILE__, "r");
    
    // Read and print character by character until EOF
    while ((ch = getc(fp)) != EOF) {
        putchar(ch);
    }
    
    fclose(fp);
    return 0;
}
int hi()
{
return 0;
}
