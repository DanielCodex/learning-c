// hopefully i spell the file name correctly 😂
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int stock = 180;
  int order;

  while (stock > 0) {
    printf("%i glasses left \n", stock);
    scanf("%i", &order);
    stock = stock - order;

    printf("you ordered %i glasses\n", order);
  }

  puts("we're out of stock, baby!");

  return 0;
}
