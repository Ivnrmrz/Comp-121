#include <stdio.h>
#include <sting.h>

int main(){
	
	char First[32];
	char Last[32];
	char buffer[64];
	
	printf ("Enter FN.");
	//stdin = standard input 
	fgets(First, 32, stdin);
	printf ("Enter LN.");
	fgets(Last, 32, stdin);
	
	
	strcpy (buffer, First);
	//strccat adds onto string
	strcat (buffer, Last);
	
	putf("Hello %c.",buffer);
	
	return(0);
	
	
}
