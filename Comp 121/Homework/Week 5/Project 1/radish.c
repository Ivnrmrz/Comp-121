#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    
    srand(time(NULL));
    int radishes; 
    printf("How many radishes need to be processed:");
    scanf("%d", &radishes);
    printf( "%d radishes need to be processed.\n", radishes );

    double stinkers = (rand() % (20 - 10 + 1) + 10);
    double trash = stinkers / 100;
    int stinkerss = radishes * trash;
    int shipped_out = radishes - stinkerss;
    printf("There are %d stinky radishes.\n" , stinkerss);
    printf("There are %d radishes remaining.\n" , shipped_out);

    int bundles = shipped_out / 12;
    int shipping = bundles * 7;
    printf("There are %d bundles, with a $%d shipping fee.\n" , bundles , shipping);
    float individual = shipped_out % 12 ;
    float ind_shipp  = individual * 1.50;
    printf("There are %.f left over rasishes, with a $%.2f shipping fee.\n" , individual , ind_shipp);
    double total_shipping = ind_shipp + shipping;
    printf("Total shipping fee is $%.2lf\n" , total_shipping);
    
    FILE *balance = fopen("savings.txt" , "a+");
    float avaliable_balance;   
    fscanf(balance, "%f" , &avaliable_balance);
    printf("There is an avaliable balance of $%.2f.\n", avaliable_balance);    
    double new_balance = avaliable_balance - total_shipping;
    printf("New balance is $%.2lf.\n", new_balance);

    float price = 10; 
    double sold = (rand() % ( 90 - 70 + 1) + 70);
    double soldd = sold / 100;
    double solddd = soldd * shipped_out; 
    double sales = solddd * price;
    printf("%.2lf radishes are sold for $%.2f each\n", solddd, price);
    double profit = solddd * price;
    double new_balancee = profit + new_balance;
    printf("This fetches a total of $%.2lf.\n", profit);
    printf("The store now has a balance of $%.2lf.\n", new_balancee);
    fprintf(balance, " %.2f \n", new_balancee );
}