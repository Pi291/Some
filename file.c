#include <stdio.h>
int main()
{
  int letters;
  while((letters = getchar()) != EOF) {
    if (letters == ' ' || letters == '\t' || letters == '\n'){
     putchar('\n');
    } else {
    putchar(letters);
    }
  }
  return 0;
}
