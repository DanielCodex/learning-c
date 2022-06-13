#include <stdio.h>

int main() {
  char username[50];
  printf("Enter your username: \n");
  scanf("%50[^\n]", username);
  printf("Username: %s\n", username);
  return 0;
} 