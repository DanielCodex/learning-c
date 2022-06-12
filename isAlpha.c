#include <ctype.h>
#include <stdio.h>

int main() {
  char ch;
  printf("Enter a char: ");
  scanf("%c", &ch);

  if (isalpha(ch) == 0){
    printf("%c is not alphabet\n", ch);
  } else {
    printf("%c is an alphabet\n", ch);
  }
  return 0;
}
