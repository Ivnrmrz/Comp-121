#include <stdio.h>

int main() {

  // Declare a variable to hold the current_game_score.
  int current_game_score;
  int current_save;
  int coins;

  // Read the value from total.txt and display it as the amount of coins the user has.
  FILE * coinsf = fopen("total.txt", "r");
  fscanf(coinsf, "%d", & coins);
  printf("You have %d coins.\n", coins);

  // Read the value from current_save.txt into a variable called current_save not current_game_score.
  FILE * savef = fopen("current_save.txt", "a+");
  fscanf(savef, "%d", & current_save);
  printf("Your current save is %d.\n", current_save);

  // If the current_save is 0:
  if (current_save == 0) {

    // Set the current_game_score to 0.
    int current_game_score = 0;

  } // If the current_save is not 0 (Saved Game):
  else if (current_save != 0) {

    //Show the user the current_save value
    printf("Current save vaule is %d\n", current_save);

    do {

      //Present the user with two options, their input should be validated with a do while loop.
      int input;
      printf("Option 1 / Option 2:");
      scanf("%d", & input);

      // Option 0: End Their Saved Game
      if (input == 0) {
        // Show them their current total.
        printf("Your total is %d", coins);

        //Add the current_save to their total
        int current_save = current_save + coins;

        // Save this value back into total.txt
        fprintf(coinsf, "%.d", current_save);

        // Show them their new total
        printf("You have %d coins.\n", current_save);

        // Set current_game_score to 0.
        int current_game_score = 0;

        // Write 0 to the current_save file.
        fprintf(savef, "0");
      } else if (input == 1) {}

    } while (current_save != 0);

  }

}