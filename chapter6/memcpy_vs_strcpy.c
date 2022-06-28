#include <stdio.h>
#include <string.h>
void dump5(char *str);
void hexDump(char *desc, void *addr, int len);

int main() {
  char s[5] = {'s', 'a', '\0', 'c', 'h'};

  char membuff[5];
  char strbuff[5];
  memset(membuff, 0, 5);  // init both buffers to nulls
  memset(strbuff, 0, 5);

  strcpy(strbuff, s);
  memcpy(membuff, s, 5);

  dump5(membuff);  // show what happened
  dump5(strbuff);
  return 0;
}

void dump5(char *str) {
  char *p = str;
  for (int n = 0; n < 5; ++n) {
    printf("%2.2x ", *p);
    ++p;
  }

  printf("\t");

  p = str;
  for (int n = 0; n < 5; ++n) {
    printf("%c", *p ? *p : ' ');
    ++p;
  }

  printf("\n", str);
}

void hexDump(char *desc, void *addr, int len) {
  int i;
  unsigned char buff[17];
  unsigned char *pc = (unsigned char *)addr;

  // Output description if given.
  if (desc != NULL)
    printf("%s:\n", desc);

  // Process every byte in the data.
  for (i = 0; i < len; i++) {
    // Multiple of 16 means new line (with line offset).

    if ((i % 16) == 0) {
      // Just don't print ASCII for the zeroth line.
      if (i != 0)
        printf("  %s\n", buff);

      // Output the offset.
      printf("  %04x ", i);
    }

    // Now the hex code for the specific character.
    printf(" %02x", pc[i]);

    // And store a printable ASCII character for later.
    if ((pc[i] < 0x20) || (pc[i] > 0x7e)) {
      buff[i % 16] = '.';
    } else {
      buff[i % 16] = pc[i];
    }

    buff[(i % 16) + 1] = '\0';
  }

  // Pad out last line if not exactly 16 characters.
  while ((i % 16) != 0) {
    printf("   ");
    i++;
  }

  // And print the final ASCII bit.
  printf("  %s\n", buff);
}