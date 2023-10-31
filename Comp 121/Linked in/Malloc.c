#include <stdio.h>
#include <stdlib.h>

#define SIZE 1024

int main (){
	
	int *scores,x;
	
	scores= malloc(sizeof(int)*4);
	if(scores == NULL){
		puts("Unable to allocate memory");
		return(1);
	}
	
	*(Scores+0) = 100;
	*(Scores+1) = 97;
	*(Scores+2) = 105;
	*(Scores+3) = 110;
	
	for (x=0,x<4,x++){
		printf("Score %d: %d\n",x+1,*(scores+x));
	}
	
	return(0);
	
}
