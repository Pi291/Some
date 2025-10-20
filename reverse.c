#include <stdio.h>
int main() 
{
  int lenght = 0;
  int c;
  char strochka[1000];
  while ( lenght < 999 && (c = getchar()) != '\n' && c != EOF) {
    strochka[lenght] = c;
    lenght++;
  }
  strochka[lenght] = '\0';

  for (int i = lenght - 1; i >= 0; i--) {
    putchar(strochka[i]);
  }
    printf("\n");

  return 0;
}
