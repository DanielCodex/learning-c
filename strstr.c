#include <ctype.h>
#include <stdio.h>
#include <string.h>

void make_upper(char *s);
void make_lower(char *s);

int main() {
  char s0[] = "dysfunctional";
  char s1[] = "fun";

  if (strstr(s0,s1)) {
    puts("i found the fun in dysfunctional\n");
  } else {
    printf("nah fun isn't in there\n");
  }

  char upper[] = "DANILE HEMMATI";
  make_lower(upper);

  return 0;
}

