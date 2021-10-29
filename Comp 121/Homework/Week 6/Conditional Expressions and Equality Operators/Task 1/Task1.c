#include <stdio.h>

int main() {
    int number1 , number2;
    printf("Enter two numbers with a space in between each:");
    scanf("%d %d", &number1, &number2);
    printf("You entered %d & %d\n" , number1 , number2);
    int result = number1 != number2;

    if(result == 0) {
    printf("These numbers are equal\n");
    } 
    else {
        printf("These numbers are not equal\n");
    }    
    }
