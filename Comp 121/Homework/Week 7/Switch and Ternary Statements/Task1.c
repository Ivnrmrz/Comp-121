// Task 1:
// Provide 2 example situations in which a ternary statement might be used.

#include <stdio.h>
#include <string.h>

int main (){

    float usd = 1;
    float cad = 1.24;
    double btc = 61619.60;
    char currency[10];
    printf("Enter region(USD/CAD):");
    scanf("%s", &currency);
    float scurrency = (strcmp(currency , "USD") == 0) ? usd : cad;
    float ppbtc = btc * scurrency;
    if (scurrency == usd){
    printf("1 BTC is = $%.2f USD as of 10/16/21 4:28\n" , ppbtc);
    }
    else{
        printf("1 BTC is = $%.2f CAD as of 10/16/21 4:28\n" , ppbtc);
    }


    printf("*New Story*\n");
    int card = 1;
    int charge;
    int cash = 0;
    char pmethod[10];

    printf("Enter Total:");
    scanf("%d", &charge);
    printf("Cash or Card?");
    scanf("%s", &pmethod);

    float spmethod = (strcmp(pmethod, "Cash") == 0) ? cash : card;
    if (spmethod == card)
    {
    int total = charge + card;
    printf("There is a $%d fee for card transactions.\n", card);
    printf("Your total is $%d.\n", total);
    }
    else {
    printf("Your total is $%d\n", charge);
    }
}

