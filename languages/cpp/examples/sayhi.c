#include <stdio.h>

void sayHello(char *name) {
  printf("Hello, %s\n", name);
}

int main() {
  char name[] = "daniel";
  sayHello(name);
  return 0;
}

