#include <stdio.h>

int main(){
    
    printf("Please enter todays date in MM/DD/YYYY: ");
    int month;    
    int day;    
    int year;    
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Please enter the current weather:");
    float weather;
    scanf("%f", &weather);

    FILE *weather_log = fopen("weather.txt" , "a");
    fprintf(weather_log, "%d/%d/%d %f \n", month, day, year, weather);
    fclose(weather_log);
}