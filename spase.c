#include <stdio.h>

void process_line(int lenght, const char buffer[]) {
  printf("you write: %s\n", buffer);

  if (lenght > 9) 
  {
    printf("\nmore than 9\n\n");
  } else 
  {
    printf("\nlow than 9\n\n");
  }

}
int main ()
{
  int c;
  int i = 0;
  char buffer[1000];
  int buffer_index = 0;
  
  while ((c = getchar()) != EOF)
  {
    if (c != '\n') 
    {
      i++;
      if (buffer_index < 999)
      {
        buffer[buffer_index++] = c;
      }
    } else {
      buffer[buffer_index] = '\0';
      process_line(i, buffer);
      i = 0;
      buffer_index = 0;
      }       
    }
  if (i > 0) {
    buffer[buffer_index] = '\0';
    process_line(i, buffer);
  }
  return 0;
}
