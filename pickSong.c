#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char tracks[][81] = {
    "I left my heart in Harvard Med School",
    "Newark, Newark - a wonderful town",
    "Dancing with a Dork",
    "From here to maternity",
    "The girl from Iwo Jima",
};

char* make_lower(char* str, size_t length) {
  char* str_length = calloc(length + 1, sizeof(char));

  for (size_t i = 0; i < length; i++) {
    str_length[i] = tolower(str[i]);
  }
  return str_length;
}

void find_track(char search_for[]) {
  for (int i = 0; i < 5; i++) {
    if (strcasestr(tracks[i], search_for)) {
      printf("Track %i: '%s'\n", i, tracks[i]);
    }
  }
}

int main(int argc, char* argv[]) {
  // char search_for[80];
  // printf("Search For: ");
  // scanf("%79s", search_for);
  // find_track(search_for);

  char* str = "DANIEL";
  size_t len = strlen(str);
  char* lower = make_lower(str, len);
  printf("%s", lower);
  free(lower);
  return 0;
}
