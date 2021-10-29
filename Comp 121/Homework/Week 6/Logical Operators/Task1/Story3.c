//||

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
char stink[]= "Yes";
char full[]= "Yes";
char *isfull, *isstink = malloc(10); 
printf("Is the trash full?:");
scanf("%s", isfull);
printf("Does the trash stink?:");
scanf("%s", isstink);

if ((strcmp(full, isfull) == 0) || (strcmp(stink ,isstink ) == 0)){
    printf("Take it out.\n");
}
else{
    printf("It can stay.\n");
}
free(isfull);
free(isstink);
}