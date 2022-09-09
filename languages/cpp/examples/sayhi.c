#include <stdio.h>

void sayHello(char *name) {
  printf("Hello, %s!\n", name);
}

// parameter by value
void printNumber(int x) {
  printf("Number: %d\n", x);
}

// parameter by reference, that is, a pointer to an integer
void anotherPrint(int *x) {
  printf("Num: %d\n", *x);
}

int main() {
  char name[] = "daniel"; // name with [] is an array, inside all char
  sayHello(name); // name is a pointer, pointing to the start address of the array

  char another[] = "Charles"; // another is an array, inside all char
  sayHello(another);

  int a = 100;
  printNumber(a);

  // give the address of the variable of a
  anotherPrint(&a);

  return 0;
}

