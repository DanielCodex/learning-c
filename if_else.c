#include <stdio.h>

int main(int argc, char* argv[]) {
  int i;
  if (argc == 1) {
    printf("you only have one arg\n");
  } else if (argc == 2) {
    printf("you have two arg\n");
    
  } else if (argc > 3) {
    for (i = 0 ; i < argc; ++i){
      printf("%s \n", argv[i]);
    }
    printf("\n");
    // printf("you have more than 3 arg\n");
  }
  return 0;
}
