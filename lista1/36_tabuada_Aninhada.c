#include <stdio.h>

int main(void) {
  for(int x = 1; x <= 10; x++) {
    printf("\n tabuada do %i",x);
    for(int y = 0; y <= 10; y++) {
      printf("\n %i x %i = %i", x, y, y*x);
    }
  }
  
  // com while
  int x = 1;
  while (x <=10 ) {
    printf("\nTabuada do %i (while)",x);int y = 0;
    while(y<10) {
      printf("\n%i x %i = %i", x, y, y*x);
      y++;
    }
    x++;
  }
  return 0;  
}


