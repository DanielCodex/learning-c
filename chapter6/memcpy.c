#include <stdio.h>
#include <string.h>

int main() {
  const char src[50] = "http://danielcodex.com";
  char dest[50];
  strcpy(dest, "hello there");
  printf("before memcpy dest = %s\n", dest);
  memcpy(dest, src, strlen(src) + 1);
  printf("after memcpy dest = %s\n", dest);

  return 0;
}
