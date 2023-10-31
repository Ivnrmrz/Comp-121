#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
  char key[]= "Yes";
  char *response = malloc(10);
  printf("lets play?");
  scanf(" %s", response);

  if (strcmp(response, key) == 0){
      printf("Okay");
  }
  else{
      printf("Goodbye");
  }
  free(response);
}
