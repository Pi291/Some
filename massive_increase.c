#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
  int *numbers = (int*) malloc(5 * sizeof(int));
  if (numbers == NULL) {
    int *new_numbers = (int*) realloc(numbers, 20 * sizeof(int));
    if (new_numbers == NULL) {
      printf("Error with pointers\n ");
      free(numbers);
      return 1;
    }
    new_numbers[0] = 1;
    new_numbers[1] = 2;
    new_numbers[2] = 3;
    new_numbers[3] = 4;
    printf("Original massiv:\n ");
    for(int i = 0; i < 4; i++) {
      printf("%d\n ", new_numbers[i]);
    }
    new_numbers[4] = 5;
    new_numbers[5] = 6;
    new_numbers[6] = 7;
    printf("large massiv:\n ");
    for (int i = 0; i < 7; i++) {
      printf("%d\n ", new_numbers[i]);
    }
    free(new_numbers);
  } else if (numbers != NULL){
    numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 3;
    numbers[3] = 4;
    printf("Original massiv:\n ");
    for(int i = 0; i < 4; i++) {
      printf("%d\n ", numbers[i]);
    }
    numbers[4] = 5;
    numbers[5] = 6;
    numbers[6] = 7;
    printf("large massiv:\n ");
    for (int i = 0; i < 7; i++) {
      printf("%d\n ", numbers[i]);
    }
  } else {
    printf("There is no reason why i write all this code");
  }
  return 0;
}

