#include <stdio.h>
#include <stdlib.h>

typedef struct island {
  char *name;
  char *opens;
  char *close;
  // you store a pointer to the next island in the struct
  struct island *next;
} island;

void display(island *start) {
  island *i = start;
  printf("%p\n", &i);  // what is i in here;
  for (; i != NULL; i = i->next) {
    printf("name: %s open: %s-%s\n", i->name, i->opens, i->close);
    printf("%p\n", i->next);
  }
}

island *create(char *name) {
  island *i = malloc(sizeof(island));
  i->name = name;
  i->opens = "09:00";
  i->close = "17:00";
  i->next = NULL;
  return i;
}

int main() {
  // island amity = {"Amity", "09:00", "17:00", NULL};
  // island craggy = {"Craggy", "09:00", "17:00", NULL};
  // island isla_nublar = {"Isla Nublar", "09:00", "17:00", NULL};
  // island skull = {"Skull", "09:00", "17:00", NULL};
  // island shutter = {"Shutter", "09:00", "17:00", NULL};
  // amity.next = &craggy;
  // craggy.next = &isla_nublar;
  // isla_nublar.next = &shutter;
  // isla_nublar.next = &skull;
  // skull.next = &shutter;

  // put the address
  // display(&amity);
  char name[80];
  fgets(name, 79, stdin);
  island *p = create(name);
  p->next = p;
  return 0;
}
