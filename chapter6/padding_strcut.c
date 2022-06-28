#include <stdio.h>

// https://www.geeksforgeeks.org/is-sizeof-for-a-struct-equal-to-the-sum-of-sizeof-of-each-member/#:~:text=The%20sizeof%20for%20a%20struct,the%20end%20of%20the%20structure.
// see this link for viz

// this is mental
typedef struct {
  double z; // this is 8 byte
  int x; // 4 byte 
  short int y;// this is 2 byte
} A;

int main() {
  printf("%ld\n", sizeof(A));
  return 0;
}
