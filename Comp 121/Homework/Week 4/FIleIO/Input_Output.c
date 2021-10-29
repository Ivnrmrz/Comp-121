#include <stdio.h>

int main(){
    
    FILE *variables = fopen("variables.txt", "r");
    int first;
    float second;
    double third;
    char fourth;
    fscanf(variables, "%d/%f/%lf/%c" , &first, &second, &third, &fourth);
    printf(" integer: %d\n float:   %f\n double:  %lf\n char:    %c\n ", first , second, third, fourth);
    fclose(variables);
    
    FILE *file1 = fopen("int.txt", "w");
    fprintf(file1, "%d" , first);
    fclose(file1);
    
    FILE *file2 = fopen("float.txt", "w");
    fprintf(file2, "%f" , second);
    fclose(file2); 
    
    FILE *file3 = fopen("double.txt", "w");
    fprintf(file3, "%lf" , third); 
    fclose(file3);
    
    FILE *file4 = fopen("char.txt", "w");
    fprintf(file4, "%c" , fourth); 
    fclose(file4);
}