#include <stdio.h>

int main() {
  int rows, i, j;

  printf("Enter the number of rows: ");
  scanf("%d", &rows);

  // Example 1: Right-angled triangle
  printf("\nRight-angled triangle:\n");
  for (i = 1; i <= rows; i++) {
    for (j = 1; j <= i; j++) {
      printf("*");
    }
    printf("\n");
  }
}
