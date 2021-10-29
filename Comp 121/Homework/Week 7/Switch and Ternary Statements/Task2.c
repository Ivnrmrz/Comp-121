// Task 2:
// Provide an example situation in which a switch statement with at least 3 cases and 
// a default case might be used. Switch based on a value scanned from the terminal.

#include <stdio.h>

int main() {

  printf("Choose item:");
  char selected;
  scanf("%c", &selected);
  switch (selected) {
  case 'A':
    printf("You selected %c , here is your Coke\n", selected);
    break;
  case 'B':
    printf("You selected %c , here is your Sprite\n", selected);
    break;
  case 'C':
    printf("You selected %c , here is your Fanta\n", selected);
    break;
  case 'D':
    printf("You selected %c , here is your Water\n", selected);
    break;
  default:
    printf("Invalid Selection.\n");
  }
  printf("Thank you come again!\n");
}