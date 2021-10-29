//Read in from the terminal two double values to multiply together, as well as a third value.
// Check if the multiplied value is equal to the third value using the threshold method described
// in the reading.

#include <stdio.h>
#include <math.h>

int main(){
double val1 , val2 , val3;
printf("Enter three numbers:");
scanf("%lf %lf %lf", &val1, &val2, &val3);
double combined = val1 * val2;
double threshold = 0.01;
double diff = val3 - combined;
double absdiff = fabs(diff);
int result = absdiff < threshold;

if(result == 1){
    printf("The the third number equals the product of the first two.\n");
}
else{
    printf("The the third number does not equal the product of the first two.\n");
}

}

