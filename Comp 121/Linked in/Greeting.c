#include <stio.h>
#include <stdlib.h>

#define SIZE 64

int main(){
	
	char *name;
	
	name = malloc(sizeof(char) * SIZE);
	if (name == NULL){
		puts("Unable to allocate memory");
		return(1);
	}
	
	printf("What is your name?:\n");
	fgets(name, SIZE, stdin);
	pritnf("Hello %s", name);
	return(0);
	
}
