#include <stdio.h>
#include <string.h>

int main() {
  // char *a = "string1";
  // const char b[] = "stirng2";
  // a[0] = 'X';
  // b[0] = 'Y';
  // int *a = NULL;
  // //  *a = 1;

  char masked_rider[] = "Alive";
  masked_rider[0] = 'D';
  masked_rider[1] = 'E';
  masked_rider[2] = 'A';
  masked_rider[3] = 'D';
  masked_rider[4] = '!';
  char *jimmy = masked_rider;
  printf("masked raider is %s, jimmy is %s\n", masked_rider, jimmy);

  return 0;
}
