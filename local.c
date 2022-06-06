#include <stdio.h>

int function();
int some_random_func();

int function() {
  auto int a = 123;
  printf("%d\n", a);

  void some_random_func() {
    int b = 11111;
    printf("%d\n", b);
    printf("the value of a is %d\n", a);
  }
  some_random_func();

  return 0;
}

int main() {
  function();
  return 0;
}
