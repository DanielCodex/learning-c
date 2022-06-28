#include <stdio.h>
#include <stdlib.h>

// this is mental
typedef struct {
  double z;
  int x;
  short int y;
} A;

typedef struct island {
  char *name;
  char *opens;
  char *closes;
  struct island *next;
} island;

void display(island *start) {
  island *i = start;
  for (; i != NULL; i = i->next) {
    printf("Name: %s open: %s-%s\n", i->name, i->opens, i->closes);
  }
}

island *create(char *island_name) {
  island *i = malloc(sizeof(island));
  printf("%ld\n", sizeof(i));
  // i->name = strdup(island_name);
  i->name = island_name;
  i->opens = "09:00";
  i->closes = "17:00";
  i->next = NULL;
  return i;
}

int main() {
  // char name[80];
  // fgets(name, 80, stdin);
  // island *island_0 = create(name);
  // fgets(name, 80, stdin);
  // island *island_1 = create(name);
  // island_0->next = island_1;
  // display(island_0);

  printf("%ld\n", sizeof(struct A));

  return 0;
}
