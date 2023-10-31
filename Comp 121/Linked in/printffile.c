#include <stdio.h>

int main (){
FILE *my_input = fopen("input.txt", "r");
while (feof(my_input) == 0) {
    // While there is more content in the file.    
    char my_content;
    fscanf(my_input,"%c", &my_content);    
    // The very last character in a file is the EOF.
    // This is very ugly when printed as we don't have a symbol for it.    
    // We will only print the content if it is not the EOF signal
    if (my_content != EOF) {
        // EOF is defined in stdio.h        
        printf("%c", my_content);
    }
}
printf("That was everything in the file!\n");
}
