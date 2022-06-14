#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* myStrcasestr(const char* haystack, const char* needle) {
  /* Edge case: The empty string is a substring of everything. */
  if (!needle[0]) return (char*)haystack;

  /* Loop over all possible start positions. */
  for (size_t i = 0; haystack[i]; i++) {
    bool matches = true;
    /* See if the string matches here. */
    for (size_t j = 0; needle[j]; j++) {
      /* If we're out of room in the haystack, give up. */
      if (!haystack[i + j]) return NULL;

      /* If there's a character mismatch, the needle doesn't fit here. */
      if (tolower((unsigned char)needle[j]) !=
          tolower((unsigned char)haystack[i + j])) {
        matches = false;
        break;
      }
    }
    if (matches) return (char*)(haystack + i);
  }
  return NULL;
}

int main(void) {
  if (myStrcasestr("hello", "HELLO") == 0) {
    printf("they are the same\n");
  } else {
    printf("they are not same\n");
  }
  return 0;
}
