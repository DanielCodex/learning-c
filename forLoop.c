#include <stdio.h>

#define length(x) (sizeof(x) / sizeof((x)[0]))

int main(int argc, char *argv[]) {
  for (int i = 0; i < argc; ++i) {
    printf("arg %d: %s\n", i + 1, argv[i]);
  }

  char *states[] = {
      "California", "Oregon",
      "Washington", "Texas", NULL};

  for (int i = 0; i < length(states); ++i) {
    printf("states: %d: %s\n", i, states[i]);
  }

  if (NULL == NULL){
    printf("are we good\n");
  }

  return 0;
}
