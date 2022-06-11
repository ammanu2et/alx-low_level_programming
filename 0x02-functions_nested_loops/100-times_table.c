#include "main.h"
/**
 * times_table - Prints the 9 times table, starting with 0
 * Return: empty output
 */
void print_times_table(int n)
{
      int j,i;

      for(i=0;i<=n;i++)
      {
        for(j=0;j<=n;j++)
        {
          if (n > 15 || n < 0)
              printf(" ");
             else
   	    printf("%d, ",i*j);

         }
        printf("\n");
       }
}
