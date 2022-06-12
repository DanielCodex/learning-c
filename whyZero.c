// https://albertkoz.com/why-does-array-start-with-index-0-65ffc07cbce8

#include <stdio.h>

int main() {
  int data[6] = {1, 2, 3, 4, 5, 6};
  int i = 0;
  printf("Array:     %p\n", data);

  do {
    printf("Array[%d] = %p\n", i, (&data[i]));
    i++;
  } while (i < 6);

  printf("data[0]:%p\n", &data);

  return 0;
}
