#include <stdio.h>

int main() {
  char first_name[50];
  char last_name[50];
  printf("Type your username: ");

  scanf("%s %s", first_name, last_name); // get all of them at once
  printf("\n");

  printf("firstname:'%s' lastname: '%s'\n", first_name, last_name);
  return 0;
}
