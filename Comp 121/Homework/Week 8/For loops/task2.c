
#include <stdio.h>

int main (){
  int i, number, factorial = 1;
 
  printf("Enter a number to calculate its factorial:");
  scanf("%d", &number);

  if (number > 0 && number < 11){
  do{
  for (i = 1; i <= number; i++)
    factorial = factorial * i;
    printf("%d! is %d\n", number, factorial);
    return 0;
  }
  while (number > 0 && number < 11);
  }
  printf("Not in range\n");
}
    
