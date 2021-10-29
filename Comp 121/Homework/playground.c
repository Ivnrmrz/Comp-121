// Write a program that asks the user for their GPA. When a GPA below 2.0 is entered, 
// have the message "Warning! You may qualify for academic probation!" display. No matter what, 
// thank the user for entering their information.

#include<stdio.h>

int main(){
    double gpa;
    double mingpa = 2.0;
    printf("Enter your GPA:");
    scanf("%lf", &gpa);
 
    if(gpa <= mingpa){
        printf("Warning! You may qualify for academic probation!\n");
    }
    printf("Thank you.\n");
}