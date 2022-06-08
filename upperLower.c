#include <stdio.h>
#include <ctype.h>
#include <string.h>

void make_upper(char *s);
void make_lower(char *s);

int main() {
  char s[] = "daniel hemmati is a good programmer";
  char makeLower[] = "HELLO THERE HOW ARE YOU";

  make_upper(s);
  printf("%s\n", s);

  make_lower(makeLower);
  printf("%s\n", makeLower);

  return 0;
}

void make_upper(char *s){
  int length = strlen(s);

  for (int i = 0; i <length; i++){
    s[i] = toupper(s[i]);
  }
}

void make_lower(char *s){
  int length = strlen(s);

  for (int i =0; i < length; i++){
    s[i] = tolower(s[i]);
  }
}