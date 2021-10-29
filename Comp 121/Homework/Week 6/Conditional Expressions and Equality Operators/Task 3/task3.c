#include <stdio.h>

int main (){
    int alive = 1;
    
    while (alive = 1){
     int door;
     printf("You are being chased by lions and come across 2 doors.\nDo you go through door 1 or 2?:");
     scanf("%d" , &door);
     int doord = door != 2;
     
        if (doord == 1){
         printf("WWRAAHHH! ZOMBIES HAD YOU FOR DINNER\n");
          printf("______          __________      __     __    ________________  \n");
          printf("|     |         |         |    |  |   /  /   |               | \n");
          printf("|      |        |  _______|    |  |  /  /    |               | \n");
          printf("|  ||   |       |  |           |  | /  /     |_____     _____| \n");
          printf("|  |/   /       |  |______     |  |/  /            |    |      \n");
          printf("|      /        |         |    |     /             |    |      \n");
          printf("|  ||  |        |  _______|    |     |             |    |      \n");
          printf("|  | |  |       |  |           |  ||  |            |    |      \n");
          printf("|  |  |  |      |  |______     |  | |  |           |    |      \n");
          printf("|  |   |  |     |         |    |  |  |  |          |    |      \n");
          printf("|__|    |__|    |_________|    |__|   |__|         |____|      \n");
         return 0;
        }
     else {
         printf("Door number 1 had zombies behind the door, good choice.\n");
     }
     int number;
     printf("You come across a box troll that asks you to pick a number between 1-1000\nWhat number do you pick?:");
     scanf("%d" , &number);
     int numberd = number == 1;
     
        if (numberd == 0){
         printf("Wrong number, the box troll blew your head off with his shotgun.\n");
          printf("______          __________      __     __    ________________  \n");
          printf("|     |         |         |    |  |   /  /   |               | \n");
          printf("|      |        |  _______|    |  |  /  /    |               | \n");
          printf("|  ||   |       |  |           |  | /  /     |_____     _____| \n");
          printf("|  |/   /       |  |______     |  |/  /            |    |      \n");
          printf("|      /        |         |    |     /             |    |      \n");
          printf("|  ||  |        |  _______|    |     |             |    |      \n");
          printf("|  | |  |       |  |           |  ||  |            |    |      \n");
          printf("|  |  |  |      |  |______     |  | |  |           |    |      \n");
          printf("|  |   |  |     |         |    |  |  |  |          |    |      \n");
          printf("|__|    |__|    |_________|    |__|   |__|         |____|      \n");
         return 0;
        }
     else {
         printf("Congratulations, you picked the right number. The box troll gave you his shotgun and hung himslef.\n");
      }
      
     char d;
     printf("You come across a trader wiling to trade your shotgun for his truck, do you accept his offer? ( Y / N)):");
     scanf(" %c" , &d);
     int dd = d == 'Y';
     
        if (dd == 1){
         printf("The car was out of gas, the lions caught up to you and now you're dead.\n");
          printf("______          __________      __     __    ________________  \n");
          printf("|     |         |         |    |  |   /  /   |               | \n");
          printf("|      |        |  _______|    |  |  /  /    |               | \n");
          printf("|  ||   |       |  |           |  | /  /     |_____     _____| \n");
          printf("|  |/   /       |  |______     |  |/  /            |    |      \n");
          printf("|      /        |         |    |     /             |    |      \n");
          printf("|  ||  |        |  _______|    |     |             |    |      \n");
          printf("|  | |  |       |  |           |  ||  |            |    |      \n");
          printf("|  |  |  |      |  |______     |  | |  |           |    |      \n");
          printf("|  |   |  |     |         |    |  |  |  |          |    |      \n");
          printf("|__|    |__|    |_________|    |__|   |__|         |____|      \n");
         return 0;
         
        }
     else{
         printf("The car was out of gas but you finished the lions off with your shotgun. GG's.\n");
         return 0;
     }
     
    }
}



 
