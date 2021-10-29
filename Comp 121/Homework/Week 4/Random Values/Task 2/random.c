#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));
    
    int first = (rand() % (25 - 13 + 1)) + 13;
    printf("%d\n", first);
    
     first = (rand() % (21 - 5 + 1)) + 5;
    printf("%d\n", first);

     first = (rand() % (66 - 5 + 1)) + 5;
    printf("%d\n", first);

     first = (rand() % (30 - 10 + 1)) + 10;
    printf("%d\n", first);
}



