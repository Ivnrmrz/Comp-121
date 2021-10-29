// Task 1:
// Create a situation in which one message is displayed if a condition is met, 
// or a different message is displayed if it isn't using an if/else structure.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

  char agree[] = "Yes";
  char * dagree = malloc(10);

  printf("Do you play video games (Yes/No)?:");
  scanf("%s", dagree);

  if (strcmp(dagree, agree) == 0) {
    printf("Cool I do too!\n");
  } else {
    printf("You should consider playing one day.\n");
  }
  free(dagree);
}