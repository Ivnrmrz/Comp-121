// Task 2:
// Create a scenario in which multiple conditions need to be evaluated based 
// on an user input using an if/else if.../else structure. Provide multiple else ifs.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>


int main (){

    char un[] = "Ivnrmrz";
    char pw[] = "Password";
    char * eun = malloc(10);
    char * epw = malloc(10);
    

    int success = 0;
    
    while (success == 0){
    printf("*My PC LOGIN*\n");
    login: 
    printf("Enter Username:");
    scanf("%s", eun);
    printf("Enter Password:");
    scanf("%s", epw);
    if ((strcmp(un, eun) == 0) && (strcmp(pw, epw) == 0)){
        printf("Welcome back Ivan.\n");
        sleep(10);
        return(1);
    }
    else if ((strcmp(un, eun) != 0) && (strcmp(pw, epw) != 0)){
        printf("Usename and Password incorrect.\nTry again.\n");
        goto login;
    }
    else if (strcmp(un, eun) != 0){
        printf("Username is incorrect.\nTry again.\n");
        goto login;
    }
    else if (strcmp(pw, epw) != 0){
        printf("Password is incorrect.\nTry again.\n");
        goto login;
    }
    }
    free(eun);
    free(epw);
}


