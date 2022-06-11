#include "main.h"
#include <stdio.h>
/**
 * times_table - Prints the 9 times table, starting with 0
 * Return: empty output
 */
void print_times_table(int n)
{
      int j,i,d;

      for(i = 0; i <= n; i++)
      {
        for(j = 0; j <= n; j++)
          {
            d = i * j;
            printf("%d", d);
            if(j != n)
            printf(",   ");
          }
        else(n > 15 || n < 0)
        break;

   	  }
        printf("\n");
}
