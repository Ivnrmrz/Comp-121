#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));
    printf("Enter two whole numbers as your range, in the format High-Low:");
    int high_number , low_number;
    scanf("%d-%d", &high_number, &low_number);
    int number = (rand() % (high_number - low_number + 1)) + low_number;
    printf("%d\n", number);
    number = (rand() % (high_number - low_number + 1)) + low_number;
    printf("%d\n", number);
    number = (rand() % (high_number - low_number + 1)) + low_number;
    printf("%d\n", number);
   
}


