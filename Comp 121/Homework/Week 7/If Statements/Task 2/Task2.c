// Write 3 different scenarios using if statements. 
// Have a story that uses an equality operator in the if statement condition.
// Have a story that uses a relational operator in the if statement condition.
// Have a story that combines two conditions using && or || in the if statement condition.
#include <stdio.h>

#include <string.h>

#include <stdlib.h>

int main() {
  int cont = 1;
  int stop = 1;
  while (cont == 1) {

    printf("*Using equality operator*\n\n");
    printf("Are you human?(Yes/No):");
    char human[] = "Yes";
    char * ishum = malloc(10);
    scanf("%s", ishum);
    if (strcmp(human, ishum) == 0) {
      printf("You may continue to the next section.\n");
    } else {
      break;
    }
    free(ishum);

    printf("*Using relational operator*\n\n");
    int age;
    int too_old = 45;
    printf("How old are you?:");
    scanf("%d", & age);
    if (age <= too_old) {
      printf("You may continute to the next section.\n");
    } else {
      break;
    }
    printf("*Using equality operator*\n\n");
    char drake[] = "Yes";
    char corridos[] = "Yes";
    char trippie[] = "Yes";
    char * ldrake = malloc(10);
    char * ltrippie = malloc(10);
    char * lcorridos = malloc(10);
    printf("Do you like Drake's music?(Yes/No):");
    scanf("%s", ldrake);
    printf("Do you like Trippie's music?(Yes/No):");
    scanf("%s", ltrippie);
    printf("Do you like Corridos?(Yes/No):");
    scanf("%s", lcorridos);

    if ((strcmp(drake, ldrake) == 0) || (strcmp(trippie, ltrippie) == 0)) {
      printf("We can be friends!\n");
      return (0);
    } else {
      if ((strcmp(corridos, lcorridos) == 0) && ((strcmp(drake, ldrake) != 0) && (strcmp(trippie, ltrippie) != 0))) {
        printf("We can be friends!\n");
        return (0);
      } else {
        break;
      }
    }
    free(ldrake);
    free(ltrippie);
    free(lcorridos);
  }
  printf("Sorry you didn't make the cut.");
  return (0);

}