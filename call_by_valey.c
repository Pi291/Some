#include <stdio.h>

void chainge_valey(int mass[],  int new_number[], int x) {
  for (int i = 0; i < x; i++) {
    mass[i] = new_number[i];
  }
}

int main(){
  int numbers[4] = {1, 2, 3, 4};
  int new_number[4] = {23, 45, 123, 0};

  printf("Org number ");
    for (int i = 0; i < 4; i++) {
      printf("%d\n", numbers[i]);
    }

  chainge_valey(numbers, new_number, 4);
  printf("Chainge number ");

    for (int i = 0; i < 4; i++) {
      printf("%d\n", numbers[i]);
    }
}
