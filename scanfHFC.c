#include <stdio.h>
#include <stdlib.h>

int main() {
  int x;
  scanf("%i", &x);
  printf("you entered the value %i\n", x);

  // if we use char
  char info[100];
  scanf("%s", info);
  printf("you said that %s\n", info);

  return 0;
}
