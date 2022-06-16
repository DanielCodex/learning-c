#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int sizeArray;
  printf("Enter the size of the Array: ");
  scanf("%d", &sizeArray);

  int array[sizeArray];
  for (int i = 0; i < sizeArray; ++i) {
    array[i] = rand() % 100;
  }

  for (int i = 0; i < sizeArray; i++) {
    printf("%d ", array[i]);
  }

  printf("\n");
  time_t t;
  printf("%ld\n", time(&t));

  return 0;
}
