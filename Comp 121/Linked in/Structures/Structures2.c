#include <stdio.h>
#include <string.h>

int main(){
	struct date {
		int year;
		int month;
		int day;
		
	}; 
	struct person{
		char name [32];
		struct date birthday;
	};
	struct person friend;
	
	strcpy(friend.name, "George Washington");
	friend.year = 1732; 
	friend.month = 2;
	friend.day = 22;
	
	printf("My friend %s was born on %d/%d/%d\n". friend.name, friend.month,friend.day,friend.year);
	
	return(0)
}
