

#include <stdio.h>
int main(){
   
   int average_customers = 550 ;
   float buying_customers = 0.1 ;
   float avg_customer_pay = 12.75 ;
   int customers_pay = average_customers * buying_customers;
   float average_day_pay = customers_pay * avg_customer_pay ;

   printf("The store makes on average $%.2f a day\n",average_day_pay);
 
}


