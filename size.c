#include <stdio.h>
#include <string.h>

#define length(x) (sizeof(x) / sizeof((x)[0]))
// #define NELEMS(x)  (sizeof(x) / sizeof((x)[0]))

int main() {
  // printf("%ld\n", sizeof(char));
  // printf("%ld\n", sizeof(int));
  // printf("%ld\n", sizeof(float));
  // printf("%ld\n", sizeof(long));
  // printf("%ld\n", sizeof(double));

  // printf("-----------------\n");
  // int areas[] = {1, 2, 3, 4, 5};
  // printf("%ld\n", length(areas));

  // char name[] = "Zedd";
  // printf("%ld \n", sizeof(name)/ sizeof(char));


  // full_name[12] = 'X';
  // printf("%ld\n", length(full_name));

  char test[] = "zed";

  for (int i = 0; i < length(test); ++i) {
    printf("%c\n", test[i]);
    if (test[i] == '\0'){
      printf("%d\n", test[i]);
      printf("we hit the null byte");
    }
  // }

  // printf("%d\n", length(test));
  if (test[4] == '\0') {
    printf("%d\n", test[strlen(test) + 1]);
    printf("this is null byte\n");
  }

  return 0;
}
