#include <stdio.h>

#define MEALS 3 //defines total meals

int main () {
	
	int calories[MEALS];
	int x,total;
	
	total = 0; //sets count
	puts("Calorie Counter");
	for(x=0;x<MEALS;x++);{
		pritnf("Calories at meal %d: ", x+1);
		scanf("%d", &calorires[x]);
		total = total + calories[x];
	}
	printf("You had a total of %d calories.\n", total);
	return(0);
	
}
