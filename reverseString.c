#include <stdio.h>
#include <string.h>

// this is my sol BTW. 
void print_reverse(char *s){
  size_t len = strlen(s);
  printf("%ld\n", len);

  for (int i = len; i >= 0; i--){
    printf("%c", s[i]);
  }

}

int main() {
  print_reverse("ABC");
  return 0;
}
