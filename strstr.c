#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
  // char s0[] = "dysfunctional";
  // char s1[] = "fun";

  // if (strstr(s0,s1)) {
  //   puts("i found the fun in dysfunctional\n");
  // } else {
  //   printf("nah fun isn't in there\n");
  // }

  const char haystack[20] = "tutorialpoint";
  const char needle[10] = "point";
  char *ret;
  ret = strstr(haystack, needle);
  printf("the substring is: %s\n", ret);

  return 0;
}

