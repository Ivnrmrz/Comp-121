
// switch (INPUT_EXPRESSION) {    
//     case FIRST_VALUE:    // Code to run when INPUT_EXPRESSION == FIRST_VALUE goes here    
//     break;    
//     case SECOND_VALUE:    // Code to run when INPUT_EXPRESSION == SECOND_VALUE goes here    
//     break;    
//     case THIRD_VALUE:    // This can go on forever    break;    
//     default:    // Code to run when INPUT_EXPRESSION matches none of the cases goes here    
//     break;

#include <stdio.h>

int main (){

printf("Please enter the rating of the game: "); 
char rating; 
scanf("%c", &rating); 
switch(rating) {    
case 'E':        
printf("This game is rated %c for Everyone\n", rating);        
break;    
case 'T':        
printf("This game is rated %c for Teens\n", rating);        
break;    
case 'M':        
printf("This game is rated %c for Mature Audiences\n", rating);        
break;    
case 'A':        
printf("This game is rated %c for Adults Only\n", rating);        
break;    
default:        
printf("I don't recognize that rating\n"); } 
printf("Happy to have helped!\n");
}
