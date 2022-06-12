#include <stdio.h>


// yeah working with scanf is great
int main() {
  char name[100];
  printf("enter a name: ");
  scanf("%s", name);
  printf("your name is %s.", name);
  return 0;
}
