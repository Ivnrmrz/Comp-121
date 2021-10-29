#include <stdio.h>

int main() {
  int number = 69;
  int guess;
  printf("Guess the magic number (0-100):");
  scanf("%d", & guess);

  int winner = 1;
  while (winner == 1) {
    if (guess == number) {
      printf("Congratulations you guessed it.");
      return (0);
    } else if (guess != number) {
      if (guess >= 0 && 49 >= guess) {
        printf("You're way off, go bigger:");
        scanf("%d", & guess);
      } else if (guess >= 50 && 68 >= guess) {
        printf("You're almost there, just a bit more:");
        scanf("%d", & guess);
      } else if (guess >= 70 && 85 >= guess) {
        printf("You're almost there, just a bit less:");
        scanf("%d", & guess);
      } else if (guess >= 86 && 100 >= guess) {
        printf("You're way off, go smaller:");
        scanf("%d", & guess);
      }

    }
  }
}