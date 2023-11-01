#include <stdio.h>

int main() {
    
char first_initial;
printf("Please enter your first initial:");
scanf(" %c" , &first_initial);
// Please enter your first initial: N

int birth_year;
printf("Please enter your birth year:");
scanf(" %d", &birth_year);
// Please enter your birth year: 2020

printf("We suggest the email address: %c%d@gmail.com\n", first_initial, birth_year);
// We suggest the email address: N2020@gmail.com 
}
