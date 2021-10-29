#include <stdio.h>

int main() {
  float tsla_price = 688.49;
  float new_value = -22.78;
  float new_price = tsla_price + new_value;
  printf("I bought a share of Tesla in the market for $%f\n.", tsla_price);
  printf("But then it dipped.\n");
  printf("This meant that the price per share went down to $%f\n", new_price);
  int shares = 1;
  printf("I quickly decided to buy %d more share.\n", shares);
  float total_price = tsla_price - new_price;
  printf("This cost was %f lower than the first one.\n", total_price);
  float rise = 0.10 ;
  float assets = tsla_price + new_price ;
  int profit = assets * rise ;
  printf("I've made $%d profit so far.\n", profit);
}