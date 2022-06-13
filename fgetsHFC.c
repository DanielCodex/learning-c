#include <stdio.h>


int main() {
  char line[80];
  fgets(line, 80, stdin);
  printf("your quote was: %s\n", line);

  return 0;
}
