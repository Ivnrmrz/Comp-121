#include <stdio.h>


int main() {

    FILE *file = fopen("savings.txt" , "a");
    float balance; 
    printf("Please enter your bank balance:");
    scanf("%f", &balance);
    fprintf(file, "%.2f\n", balance );
    printf("Thank You.\n");
    fclose(file);

}