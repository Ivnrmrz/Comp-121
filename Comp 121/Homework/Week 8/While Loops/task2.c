#include <stdio.h>
#include <time.h>

int main (){

    printf("Enter 1 to start oven, 0 to cancel:");
    int start;
    scanf("%d" , &start);
    if (start == 1){
        printf("Enter temp in degrees fahrenheit:");
        int temp;
        scanf("%d", &temp);
        printf("Enter time in seconds:");
        int time;
        scanf("%d", &time);
        printf("Starting overn at %d degrees fahrenheit for %d seconds\n", temp , time);
        int milli_seconds = 1000 * time;
        clock_t start_time = clock();
        while (clock() < start_time + milli_seconds)
        ;
        printf("Timer finished.\n");
    }
    printf("Goodbye!\n");
}