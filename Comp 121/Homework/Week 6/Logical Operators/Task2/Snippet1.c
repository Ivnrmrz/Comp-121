// ! && || 

#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>


void delay(int number_of_seconds) {
  int milli_seconds = 1000 * number_of_seconds;
  clock_t start_time = clock();
  while (clock() < start_time + milli_seconds)
  ;
}

int main() {
  char * has_cpu = malloc(10);
  char * has_gpu = malloc(10);
  char * play_fort = malloc(10);
  char * has_laptop = malloc(10);
  char * has_desktop = malloc(10);
  char cpu[] = "Yes";
  char gpu[] = "Yes";
  char fort[] = "Yes";
  char laptop[] = "Yes";
  char desktop[] = "Yes";

  printf("Welcome to WiseBay, In order to enter the club you:\n");
  printf("Must have an Intel Core i7-10700k CPU or above and an NVIDIA - GeForce RTX 3090 GPU\n");
  printf("Must NOT play Fortnite.\n");
  printf("Have either a Laptop or Desktop.\n");
  delay(1);
  printf("Starting application"); printf("."); delay(1); printf("."); delay(1); printf("."); delay(1); printf(".\n");
  printf("Answer with (Yes/No)\n");
  printf("Do you have an Intel Core i7-10700k CPU or above?:");
  scanf("%s", has_cpu);
  printf("Do you have an NVIDIA - GeForce RTX 3090 GPU?:");
  scanf("%s", has_gpu);
  printf("Do you play Fortnite?:");
  scanf("%s", play_fort);
  printf("Do you have a laptop?:");
  scanf("%s", has_laptop);
  printf("Do you have a desktop?:");
  scanf("%s", has_desktop);
  printf("Analyzing application"); printf("."); delay(1); printf("."); delay(1); printf("."); delay(1); printf(".\n");

  int approved = 1;

  while (approved == 1) {
    if ((strcmp(cpu, has_cpu) != 0) || (strcmp(gpu, has_gpu) != 0)) {
      printf("Sorry you've been rejected.\n");
      return (0);
      if ((strcmp(cpu, has_cpu) != 0) || (strcmp(gpu, has_gpu) != 0)) {
        return (0);
      }
    } else if (strcmp(fort, play_fort) == 0) {
      printf("Sorry you've been rejected.\n");
      return (0);
    } else if ((strcmp(laptop, has_laptop) != 0) || ((strcmp(desktop, has_desktop) != 0))) {
      if ((strcmp(laptop, has_laptop) != 0) && ((strcmp(desktop, has_desktop) != 0))) {
        printf("Sorry you've been rejected.\n");
        return (0);}
      else{
          printf("Congratulations you're in.");
      return (0);}
      
    } else {
      printf("Congratulations you're in.");
      return (0);
    }
  }
  free(has_cpu);
  free(has_gpu);
  free(play_fort);
  free(has_laptop);
  free(has_desktop);

}