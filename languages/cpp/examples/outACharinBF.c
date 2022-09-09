#include <stdio.h>

void generateNewline() {
  printf(">+++++[>++<-]>.\n");
}

void generateBF(char c) {
  printf(">"); // move the pointer for one cell
  for (int i = 0; i < c; i++) {
    printf("+");
  }
  printf(".");
}

int main() {  
  char c;
  printf("Enter a character: ");
  scanf("%c", &c);  
  
  // %d displays the integer value of a character
  // %c displays the actual character
  //printf("ASCII value of %c = %d", c, c);
  
  generateBF(c);
  generateNewline();

  return 0;
}

