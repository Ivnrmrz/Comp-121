#include <stdio.h>
#include <ctype.h>

char *encrypt(char *input);

int main(){
	
	char *instructions = "Deliver the package to Berlin";
		
	pritnf("Here are your secret instructions: \n%s\n", encrypt(instructoins));
	
	return(0);
	
} 

char *encrypt(char *input){
	
	static char output[64]; //"Static so buffer isnt lost"
	int x = 0;
	
	while(*input){
		if(isalpha(*input))
			output[x] = *input +1;
		else
			output[x] = *input;
		x++;
		input++;
	}
	return(output);
	}
	
}
