#include <stdio.h>

#define length(x) (sizeof(x) / sizeof((x)[0]))



int main() {
  int a[] = {1, 2, 3};
  printf("%ld\n", sizeof((a)[0]));
  return 0;
}
