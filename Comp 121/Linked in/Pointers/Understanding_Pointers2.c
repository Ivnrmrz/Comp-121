#include <stdio.h>

int main (){
	
	int a,b;
	int *ptr;
	
	a = 1234;
	ptr = &a; // initialized to address of a
	b = *ptr  // b assigned value of pointers address
	
	printf("A is %d and B is %d\n", a,b);
	
	return (0)
}
