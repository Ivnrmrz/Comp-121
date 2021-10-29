#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

        srand(time(NULL));
    int sides;
    printf("How many sides would you like your die to have?");
    scanf("%d" , &sides);
    int die_value = (rand() % (sides - 1 + 1)) + 1;
    printf("You rolled a %d\n", die_value);
}