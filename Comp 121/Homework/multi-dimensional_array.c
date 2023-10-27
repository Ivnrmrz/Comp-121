#include <stdio.h>

int main(){
	
	int grid[3][3];
	int row,grid;
	
	//initianalize the array/
	for(row=0;row<3;row++)
		for(col=0;col<3;col++)
			grid[row][col] = 0;

	grid[1][1] = 1; //center of grid

	// display the grid
	for(row=0;row<3;row++){
		for (col=0;col<3;col++)
			printf("%d",grid[row][col]);
		putchar('\n');
}

// Ex. 2
#include <stdio.h>

int main(){
	
	//4 is the total number of names and 5 is the total letters + 1 for null 
	char names = [4][5] = { 
	"Ant", 
	"Bee", 
	"Cat", 
	"Duck"};
	
	int x; 
	
	names[2][2]='r'; //Cat turns into car.
	for(x=0,x<4,x++)
		printf("%s\n", names[x]);
	
	return(0)
}
