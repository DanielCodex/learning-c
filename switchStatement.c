#include <stdio.h>

// i just don't like swtich case LOL 
int main(int argc, char* argv[]) {
  if (argc != 2) {
    printf("Error: you need one arguement");
    return 1;
  }

  for (int i = 0; argv[1][i] != "\0"; i++) {
    char letters = argv[1][i];

    switch (letters) {
      case 'a':
      case 'A':
        printf("%d: 'A'\n", i);
        break;

      case 'e':
      case 'E':
        printf("%d: 'E'\n", i);
      default:
        break;
    }
  }

  return 0;
}