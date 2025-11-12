#include <stdio.h>
#include <string.h>
void shit(char msg[], int size) {
  printf("содержание: %s\n", msg);
  printf("реальный размер: %i\n, длинна: %zu\n", size, strlen(msg));

}
int main () {
  char message[10] = "123456789";
  shit(message, sizeof(message));

  return 0;
}
