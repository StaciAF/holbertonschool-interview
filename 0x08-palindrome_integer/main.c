#include <stdio.h>
#include <math.h>

int main()
{
   unsigned long n;
   int exponent, divisor, first, last;
   n = 234565432;
  
   /* finding value of log1010000 */
    exponent = (int)log10(n);
    printf("%d\n", exponent);
    divisor = pow(10, (double)exponent);
    printf("%d\n", divisor);
    
    first = n / divisor;
    last = n % 10;
    printf("First: %d\n", first);
    printf("Last: %d\n", last);
   
   return(0);
}