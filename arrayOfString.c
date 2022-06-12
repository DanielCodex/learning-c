#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define legnth(x) (sizeof(x) / sizeof((x)[0]))

int main() {
  char arr[][10] = {"daniel", "hello", "hemmati"};
  char input[100];

  printf("Input a word: ");
  scanf("%s", input);
  printf("your name is %s\n", input);

  for (int i = 0; i < legnth(arr); i++) {
    if (strcmp(input, arr[i]) == 0) {
      printf("found input string at index %d\n", i);
    }
  }

  printf("we read %s\n", input);

  return 0;
}
