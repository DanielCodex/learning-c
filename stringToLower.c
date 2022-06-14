// https://www.delftstack.com/howto/c/lower-in-c/
// damn C doesn't have any chill
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *toLower(char *str, size_t lenght){
  char *str_length = calloc(lenght + 1, sizeof(char));

  for (size_t i = 0; i < lenght; i++){
    str_length[i] = tolower(str[i]);
  }

  return str_length;
}

int main() {
  char *str = "HELLO THERE HOW ARE YOU";

  printf("%s\n", str);

  size_t len = strlen(str);
  char *lower = toLower(str, len);
  printf("%s", lower);
  free(lower);

  return 0;
}