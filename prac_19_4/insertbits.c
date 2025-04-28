#include <stdio.h>

int main() {
    unsigned int N = 1024; 
    unsigned int M = 19;   
    int i = 2, j = 6;

    unsigned int allOnes = ~0; 
    unsigned int left = allOnes << (j + 1);
    unsigned int right = (1 << i) - 1;   

    unsigned int mask = left | right; 

    unsigned int N_cleared = N & mask;       
    unsigned int M_shifted = M << i;         

    unsigned int result = N_cleared | M_shifted; 

    printf("Result: %u\n", result);

    return 0;
}

