#include <stdio.h>
#include <stdlib.h>

int main()
{
  char card_name[3];
  int count = 0;
  while (card_name[0] != 'X') {
    puts("Card name? ");
    scanf("%2s", card_name);
    int val = 0;
    switch (card_name[0]) {
      case 'Q':
      case 'K':
        val = 10;
        break;
      case 'A':
        val = 11;
        break;
      case 'X':
        continue;
      default:
        val = atoi(card_name);
        if (val < 1 || val > 10) {
          puts("You are wrong");
          continue;
        }
    } /*
    if (card_name[0] == 'K' || card_name[0] == 'Q' || card_name[0] == 'J') {
      val = 10;
    } else if (card_name[0] == '3') {
      val = 11;
    } else {
      val = atoi(card_name);
    } */
    if ((val > 2 && val < 7) || (val == 11)) {
      ++count;
    }else if(val == 10) {
      --count;
    }
  printf("Card have cost: %i\n", count);
  }
  return 0;
}
