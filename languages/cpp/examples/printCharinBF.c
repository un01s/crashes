#include <stdio.h>

void generateBF(char c) {
  printf(">"); // move the pointer for one cell
  for (int i = 0; i < c; i++) {
    printf("+");
  }
  printf(".\n");
}

int main(int argc, char *argv[]) {
  char in;
  
  if (argc == 2) {
    in = argv[1];   
  } else {
    printf("  Usage: \n");
    printf("  ./printCharinBF [one char]\n");
    return 0;
  }

  generateBF(in);

  return 0;
}

