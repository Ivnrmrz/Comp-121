//! 

#include <stdio.h>

int main () {
float full = 100;
printf("Battery is full at %.2lf%%\n", full);
float battat = 75.5;
printf("The battery is at %.2f%%\n", battat);
printf("Is the battery fully charged?\n");
int fullc = (battat == full);

if( fullc != full){
    printf("No.\n");
}
else{
    printf("Yes.\n");
}
}