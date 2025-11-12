#include <stdio.h>
#include <stdlib.h>
int main() {
  char *numbers = (char*) malloc(4 * sizeof(char));
  numbers[0] = 1;
  numbers[1] = 2;
  numbers[2] = 3;
  numbers[3] = 4;
  printf("Original massiv:\n ");
  for(int i = 0; i < 4; i++) {
    printf("%d\n ", numbers[i]);
  }
  numbers = realloc(numbers, 7 * sizeof(int));
  numbers[4] = 5;
  numbers[5] = 6;
  numbers[6] = 7;
  printf("large massiv:\n ");
  for (int i = 0; i < 7; i++) {
    printf("%d\n ", numbers[i]);
  }

  free(numbers);
  return 0;
}

