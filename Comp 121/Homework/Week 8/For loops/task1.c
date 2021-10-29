// One involving a for loop that counts up

#include <stdio.h>

int main (){
    printf("Enter a number:");
    int number;
    scanf("%d", &number);

    for (int start = 0; start <= number; start++){
        printf("%d\n",start);
    }


    // One involving a for loop that counts down

    printf("Enter a number:");
    int enumber;
    scanf("%d", &enumber);

    for (int end = 0; enumber >= end; enumber--){
        printf("%d\n",enumber);
    }

}


