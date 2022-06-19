// https://www.geeksforgeeks.org/fprintf-in-c/
#include <stdio.h>

int main() {
  int n = 2;
  char str[20];

  FILE *fptr = fopen("daniel.txt", "w");
  if (fptr == NULL) {
    printf("Could not open file");
    return 0;
  }

  

  for (int i = 0; i < n; i++) {
    puts("Enter a name");
    // idk what that star do in there LOL
    scanf("%[^\n]%*c", str);
    fprintf(fptr, "%d.%s\n", i, str);
  }
  fclose(fptr);
  return 0;
}
