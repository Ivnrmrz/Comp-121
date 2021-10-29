#include <stdio.h>

int main()
{
    int i, ii, num, is_prime;
    printf("Please enter a number:");
    scanf("%d", &num);
    printf("The unique prime factors are:");
    for( i = 2 ; i <= num ; i++)
    {  if( num % i == 0 )
        {is_prime = 1;
            for(ii = 2 ; ii <= i / 2; ii++)
            { if( i % ii == 0)
                { is_prime = 0;
                 break;}
            }
            if( is_prime == 1 )
            {
                printf("%d, ", i);
            } 
        } // this is a test crazy
    }
  return 0;
}