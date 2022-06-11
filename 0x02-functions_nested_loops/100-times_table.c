#include "main.h"
#include <stdio.h>
/**
 * times_table - Prints the 9 times table, starting with 0
 * Return: empty output
 */
void print_times_table(int n)
{
      int j,i,d;
      if(n > 15 || n < 0)
            return;
      for(i = 0; i <= n; i++)
      {
        for(j = 0; j <= n; j++)
          {

            d = i * j;
            if (z > 99)
            	{
            		_putchar(z / 100 + '0');
            		_putchar((z / 10 % 10) + '0');
            		_putchar(z % 10 + '0');
           		}
           	else if (z > 9)
          		{
            		_putchar(' ');
            		_putchar(z / 10 + '0');
            		_putchar(z % 10 + '0');
            	}
            else if (y != 0)
            	{
            		_putchar(' ');
            		_putchar(' ');
            		_putchar(z + '0');
            	}
            else
            		_putchar(z + '0');

            	if (y != n)
            		{
            		    _putchar(',');
            			_putchar(' ');
            		}
          }
            _putchar('\n');

      }
}
