//Write four short little "stories" involving each of the four relational operators and explaining 
//the surrounding situation such as in the reading. Get creative

//<=

#include <stdio.h>

int main (){
    int t;
    printf("What hour is it (Milliraty time)?:");
    scanf("%d",&t);

    if ( 0 <= t && t <= 4){
        printf("Why are you awake? Go to sleep!");}
    else if (5  <= t && t <= 8 ){
        printf("Earlybird gets the worm.");}
    else if (9  <= t && t <= 11){
        printf("Good Morning.");}
    else if (12 <= t && t <= 17){
        printf("Good Afternon.");}
    else if (18 <= t && t <= 21){
        printf("Good Evening.");}
    else if (22 <= t ){
        printf("You should start heading to bed");}
    }
