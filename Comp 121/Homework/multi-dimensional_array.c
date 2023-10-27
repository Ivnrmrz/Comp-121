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
