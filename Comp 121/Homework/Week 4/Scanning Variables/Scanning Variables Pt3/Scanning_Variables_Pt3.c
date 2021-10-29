#include <stdio.h>

int main() {
    
// Please enter a stock price: 5.40
float stock;
printf("Please enter a stock price:");
scanf("%f", &stock);

// Please enter the percentage increase as a whole number: 10
float increase;
printf("Please enter the percentage increase as a whole number:");
scanf("%f", &increase);

// The stock has gained 0.54000 in value
float gain = (stock * increase);
printf("The stock has gained %.2f in value.\n", gain);

float stock_new = gain + stock;
printf("The stock price is now %.2f.\n", stock_new);
// The stock price is now 5.940000
}