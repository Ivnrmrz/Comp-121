//Write four short little "stories" involving each of the four relational operators and explaining 
//the surrounding situation such as in the reading. Get creative

//>

#include <stdio.h>
int main (){

int year;
int alch = 21;
printf("Enter your birth year:");
scanf("%d", &year);
int age = 2021 - year;

if(21 > age){
    printf("You cannot buy alch");
}
else{
    printf("You can buy alch");
}
}
