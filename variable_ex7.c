#include <stdio.h>

int main() {
  char initial = 'A';
  char first_name[] = "Zed";
  char last_name[] = "Shaw";

  first_name[3] = '@';

  printf("---------------------\n");
  printf("I have an initial %c.\n", initial);
  printf("I have a first name %s.\n", first_name);
  printf("I have a last name %s.\n", last_name);
  printf("My whole name is %s %c. %s.\n",
         first_name, initial, last_name);

  // i don't get it 😐
  // printf("%d\n", sizeof(int*));
  return 0;
}