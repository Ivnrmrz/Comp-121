//Write four short little "stories" involving each of the four relational operators and explaining 
//the surrounding situation such as in the reading. Get creative

//<

#include <stdio.h>
 
int main() {
char javi = 'A';
char michael = 'B';   
printf("Javi has an %c in the class while Michael has a %c.\n", javi, michael);   
printf("Javi says he has a higer grade than Michael.\n");   
printf("Is this true?\n");   
int result = javi < michael;   

if (result == 1){
    printf("Yes he does");}
else{
    printf("No he is wrong.");}
}