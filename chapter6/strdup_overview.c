#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// it will copy str into the heap
// char* strdup(const char* s) {
//   size_t slen = strlen(s);
//   char* result = malloc(slen + 1);
//   if (result == NULL) {
//     return NULL;
//   }

//   memcpy(result, s, slen + 1);
//   return result;
// }

int main() {
  char* s = "mona lisa";
  char* copy = strdup(s);
  // printf("%s\n", copy);
  printf("s memory locatoin %p\n", &s);
  printf("copy memory locatoin %p\n", &copy);
  return 0;
}
