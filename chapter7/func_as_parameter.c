#include <stdio.h>

void print_number(int i){
  printf("%d\n", i);
}

void func(void (*f)(int)){
  for (int i = 0; i < 5; i++){
    f(i);
  }
}

int main() {
  func(print_number);
  return 0;
}
