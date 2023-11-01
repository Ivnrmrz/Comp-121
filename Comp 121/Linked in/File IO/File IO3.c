#include <stdio.h>

int main(){
    
    FILE *tally = fopen("tally.txt" , "a+");
    int number;
    fscanf(tally , "%d" , &number);
    int tally_count = number + 1;
    fprintf(tally, "%.d" , tally_count);
    fclose(tally);
}
