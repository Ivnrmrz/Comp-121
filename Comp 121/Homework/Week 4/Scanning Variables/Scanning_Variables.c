#include <stdio.h>
#include <string.h>

int main(){
    int    number_of_cookies;
    float  cookie_each;
    double satisfaction;
    printf ("How many whole cookies did you eat? \n");
    scanf  (" %d", &number_of_cookies);
    printf ("How much were they each? \n");
    scanf  (" %f", &cookie_each);
    float  total = cookie_each * number_of_cookies;
    printf ("Your total is $ %.2lf. \n\n", total);
    char lucky_letter[1];
    printf ("Choose a letter for a chance to clear your total. (Must be Upper-case)\n");
    scanf  (" %s", lucky_letter);
    
 if (strcmp(lucky_letter, "A") == 0)
 { 
     printf("Congratulations! The cookies are on the house \n\n");
 }
 else
 {
     printf("Sorry you didn't guess the lucky letter, Try again next time! \n\n");
 }
    printf("How was your visit on a scale from 1-10? \n");
    scanf(" %lf", &satisfaction);
    float satisfaction_percent = satisfaction / 10 *100 ;
    printf("That's a %.f percent satisfaction! Thank You come again.\n", satisfaction_percent);
}


