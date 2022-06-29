#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define length(x) sizeof(x) / sizeof(int)
int scores[] = {543, 323, 32, 554, 11, 3, 112};

int compare(const void* item_a, const void* item_b) {
  // int a = *(int*)item_a;
  // int b = *(int*)item_b;
  // return a - b;
  const int* A = item_a;
  const int* B = item_b;
  return *A - *B;  // here also pointer
}

int compare_names(const void* a, const void* b){
  char** sa = (char**)a;
  char** sb = (char**)b;
  return strcmp(*sa, *sb);
}

int main() {
  char *names[] = {"Karen", "Mark", "Brett", "Molly"};
  qsort(names, 4, sizeof(char*), compare_names);
  for (int i = 0; i < 4; i++){
    printf("%s\n", names[i]);
  }
    // printf("beofre sorting the numbers: \n");
    // for (int i = 0; i < length(scores); i++) {
    //   printf("%d ", scores[i]);
    // }
    // qsort(scores, 7, sizeof(int), compare);

    // printf("\nafter sorting the array: \n");
    // for (int i = 0; i < length(scores); i++) {
    //   printf("%d ", scores[i]);
    // }

    return 0;
}
