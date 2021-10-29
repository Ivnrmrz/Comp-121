//&&

#include <stdio.h>

int main() {

  int kevin_r = 6;
  int miguel_r = 10;
  int iker_r = 8;
  printf("Kevin has %d rocks, Miguel has %d, and Iker has %d\n", kevin_r, miguel_r, iker_r);
  int mtiker = miguel_r > iker_r;
  printf("Does Miguel have more rocks than Iker?\n");

  if (mtiker == 1) {
    printf("Yes he does.\n");
  } else {
    printf("No he doesn't\n");
  }

  int mtkevin = miguel_r > kevin_r;
  printf("Does he have more than Kevin?\n");

  if (mtkevin == 1) {
    printf("Yes he does.\n");
  } else {
    printf("No he doesn't.\n");
  }
  int mtboth = mtkevin && mtkevin;
  printf("Does he have more than both?\n");

  if(mtboth == 1){
    printf("Yes he does.\n");
  } else {
    printf("No he doesn't.\n");
  }
}