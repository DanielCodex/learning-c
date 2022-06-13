#include <stdio.h>

int main() {
  int i = 0;
  while (i < 6) {
    printf("%d\n", i);
    i++; // put it here if you are going ot use continue in if
    if (i == 4) {
      break;  // it will go outside of the while
    }
    printf("do we get heer\n");
  }

  printf("%d\n", i);

  return 0;
}
