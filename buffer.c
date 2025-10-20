#include <stdio.h>

int main() {
    int c;
    int length = 0;
    
    while ((c = getchar()) != EOF) {
        if (c != '\n') {
            length++;
            putchar(c);
        } else {
            putchar('\n'); 
            if (length > 10) {
              putchar('gg');
            }
            length = 0;
        }
    }
    if (length > 0)
    {
      putchar('\n');
    }
    return 0;
}
