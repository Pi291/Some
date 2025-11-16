#include <stdio.h>
#include <string.h>

char tracks[] [100] = {
  "Africa is a gratest way to show how collonialization make progerss slow",
  "Capcha is a exsersize that computers can't do",
  "Canada is a 2-st contru in the world of massiv territory"
};

void find_tracks(char search[])
{
  for (int i = 0; i <5; i++) {
    if (strstr(tracks[i], search))
      printf("%i: '%s'\n", i, tracks[i]);
  }
}
int main() {
  char search[80];
  printf("Search for? ");
  fgets(search, 80, stdin);
  search[strlen(search) - 1] = '\0';
  find_tracks(search);
  return 0;
}
