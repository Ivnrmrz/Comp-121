#include <stdio.h>
#include <ctype.h>

void shouting (char *input);

int main(){
	
	char string[64];
	
	pritnf("Type some text: ");
	fgets(string,64,stdin);
	pritnf("You typed:\n%s\n",string);
	shuting(string);
	printf("If you were shouting, you'd type : \n%s\n", string);
	
	return(0);
} 

void shouting(char *input){
	while (*input){
		*input = toupper (*input);
		input++;
	}
}
