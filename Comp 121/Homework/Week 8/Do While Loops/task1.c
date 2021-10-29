// The first loop should require the user to enter a number between 1 and 10 to exit
// The second loop should require a number divisible by 15 to exit.
// The third loop should require a condition of your choosing, describe the condition in a comment in your program.

#include <stdio.h>
#include <string.h>

int main() {

  int x = 1;
  int i = 0;
  while (x != 0) {
    printf("Please enter a number 1 - 10: ");
    scanf(" %d", & i);
    if (i >= 1 && i <= 10) {
      break;
    }
    printf("Not 1-10!\n");
  }

  do {
    printf("Enter a number duivisible by 15: ");
    int ii;
    scanf("%d", &ii);
    if ((ii % 15) == 0) {
      break;
    }
    printf("Not divisible by 15\n");
  } while (x != 0);

  // stay till input == Yes
  char exit[5]; 
  int end = 0;
  printf("Do you want to exit?(Yes/No):");

  do{    
    scanf("%s", exit);
    if (strcmp(exit, "Yes") == 0){ 
        break;
    }
    printf("What about now?:");
  }
  while (end == 0);
  
}
