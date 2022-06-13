#include <stdio.h>

int main() {
  int contestant[] = {1, 2, 3};
  int choice = contestant[0];  // 1

  contestant[0] = 2;              // {2,2,3}
  contestant[1] = contestant[2];  // {2,3,3}
  contestant[2] = choice;         //{2,3,1}

  choice = contestant[1];  // {2,3,1}
  printf("I'm going to pick contestant number %i\n", choice);

  return 0;
}
