//Please enter a number: 3
//***

#include <stdio.h>

int main (){

    printf("Please enter a number:");
    int num;
    scanf("%d", &num);

    while (num > 0){
        printf("*");
        num--;
    }



}