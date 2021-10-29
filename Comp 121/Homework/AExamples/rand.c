#include <stdio.h>
#include <time.h>
int main (){
srand(time(NULL));
int random_value = rand() % 3;
printf("The following will be between 0 and 2: %d\n", random_value);
}

// [x , y] :     int number_in_range = (rand()  %  (upper - lower + 1)) + lower;
// (x , y] :     int number_in_range = (rand()  %  (upper - lower)) + lower + 1;
// [x , y) :     int number_in_range = (rand()  %  (upper - lower )) + lower;
// (x , y) :     int number_in_range = (rand()  %  (upper - lower - 1)) + lower + 1;